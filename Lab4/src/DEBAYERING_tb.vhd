library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use STD.TEXTIO.ALL;

entity DEBAYERING_tb is
end DEBAYERING_tb;

architecture test_bench of DEBAYERING_tb is
    constant N : integer := 8;

    component DEBAYERING
    generic( N: integer );
    port (
        clk :       IN STD_LOGIC;
        rst_n :     IN STD_LOGIC_vector(0 downto 0);
        new_image : IN STD_LOGIC;
        valid_in :  IN STD_LOGIC;
        halt: in std_logic;
        pixel :     IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        R : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        G : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        B : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        valid_out:      OUT STD_LOGIC;
        image_finished: OUT STD_LOGIC
    );
    end component;

--Input Signals
    signal clk :        STD_LOGIC := '0';
    signal rst_n:       STD_LOGIC_vector(0 downto 0) := (others=>'0');
    signal new_image :  STD_LOGIC := '0';
    signal valid_in :   STD_LOGIC := '0';
    signal pixel :      STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal ena:         STD_LOGIC := '0';
    signal halt:         STD_LOGIC := '0';
 --Output Signals
    signal R :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal G :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal B :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal valid_out: STD_LOGIC;
    signal image_finished: STD_LOGIC;
--Clock
    constant CLK_PERIOD : time := 1ns;

begin
    UUT:DEBAYERING
    generic map( N => N )
    port map(   
        clk => clk,
        rst_n => rst_n,
        new_image => new_image,
        valid_in => valid_in,
        halt => halt,
        pixel => pixel,
        R => R,
        G => G,
        B => B,
        valid_out => valid_out,
        image_finished => image_finished
        );

    clk_proc: process
    begin
        clk <= '0';
        wait for CLK_PERIOD / 2;
        clk <= '1';
        wait for CLK_PERIOD / 2;
    end process;
    
    init : process
    begin
        wait for clk_period/2;
        --rst_n <= "1";        
        --wait for clk_period;
        rst_n <= "0";
        ena <='1';
        valid_in <= '1';
        halt <= '1';
        wait for 1048576*clk_period;
        valid_in <= '0';
        wait for 10*clk_period;
        halt <= '0';
        wait for 2*clk_period;
        halt <= '1';
        wait; 
    end process ; -- init

    p_read : process(clk, rst_n) 

    file input_file      : text open read_mode is "C:\Users\Afroditi\Documents\8thSemester\dvlsi\Lab4\image_tb.txt";
    variable row_read         : line;
    variable pixel_read  : integer;
    variable pixel_row_counter : integer := 0;
    
    file output_file    : text open write_mode is "C:\Users\Afroditi\Documents\8thSemester\dvlsi\Lab4\image_deb.txt";
    variable row_write  : line;
    
    begin
        if (rst_n="1") then
            pixel_row_counter     := 0;
            pixel_read            := -1;
        elsif (rising_edge(clk)) then
            if (ena = '1') then
                -- read from input file in "row" variable
                if(not endfile(input_file)) then
                    if (pixel_row_counter = 0) then
                        new_image <= '1';
                    else
                        if (pixel_row_counter = N*N -1) then
                            pixel_row_counter := -1;
                        end if;
                        new_image <= '0';
                    end if;                  
                    pixel_row_counter := pixel_row_counter + 1;
                    readline(input_file,row_read);
                end if;
                -- read integer number from "row" variable in integer array
                read(row_read,pixel_read);
                --valid_in <= '1';
                pixel <= std_logic_vector(to_unsigned(pixel_read,8));
            end if;
            if (valid_out = '1') then
                write(row_write, to_integer(unsigned(R)), left, 4);
                write(row_write, to_integer(unsigned(G)), left, 4);
                write(row_write, to_integer(unsigned(B)), left, 4);
                writeline(output_file,row_write);
            end if;
            if  (image_finished = '1' and valid_out = '1') then
                write(row_write,string'("IMAGE FINISHED!"));
                writeline(output_file,row_write);
            end if;
        end if;       
    end process ; -- p_read

end test_bench ; -- test_bench