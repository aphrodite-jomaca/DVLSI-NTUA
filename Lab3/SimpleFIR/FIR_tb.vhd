library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.math_real.all;

entity FIR_TB is
end FIR_TB;

architecture testbench of FIR_TB is
    constant data_width, coeff_width : integer := 8;
    constant min_vector_size : integer := 8;

    component FIR
        generic(
            data_width :   integer    := 8;
            coeff_width:   integer    := 8;
            min_vector_size: integer  := 8
        );
        Port ( 
            clk: in std_logic;
            rst: in std_logic;
            valid_in : in std_logic;
            x: in std_logic_vector(data_width-1 downto 0);
            y: out std_logic_vector((data_width + coeff_width + integer(ceil(log2(real(min_vector_size)))))-1  downto 0);
            valid_out : out std_logic
        );
    end component;

    --Input Signals
    signal clk: std_logic:='0';
    signal rst: std_logic:='0';
    signal valid_in: std_logic:='0';
    signal x : std_logic_vector(data_width-1 downto 0):=(others=>'0');
    signal valid_out: std_logic:='0';

    --output signals
    signal y : std_logic_vector((data_width + coeff_width + integer(ceil(log2(real(min_vector_size)))))-1 downto 0):=(others=>'0');

    --Clock
    constant CLKP : time := 1ns;

    begin

        clk_proc: 
            process
                begin
                    clk <= '0';
                    wait for CLKP/2;
                    clk <= '1';
                    wait for CLKP/2;
            end process;
            
        UUT: FIR port map(
            clk => clk,
            rst => rst,
            valid_in => valid_in,
            x => x ,
            y => y,
            valid_out => valid_out
            );
        TEST: 
            process
            begin
                rst <= '1';
                valid_in <= '1';
                x <= "00011011";
                wait for CLKP/4;
                rst<='0';
                wait for 3*CLKP/4;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "11110110";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "00000001";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "11000110";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "11010001";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "11011110";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "00010101";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "01100110";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "01000010";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                valid_in <= '1';
                x <= "11001100";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
                
                
                valid_in <= '1';
                x <= "00000000";
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
 
                 valid_in <= '1';
                --x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;

                valid_in <= '1';
               -- x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
              
                valid_in <= '1';
               -- x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;               
                
                valid_in <= '1';
               -- x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
 
                 valid_in <= '1';
               -- x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;

                valid_in <= '1';
                --x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP;
              
                valid_in <= '1';
               --x <= (others => '0');
                wait for CLKP;
                valid_in <= '0';
                wait for 7*CLKP; 
            end process;

end testbench;