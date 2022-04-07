library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity CONTROL_tb is
end CONTROL_tb;

architecture test_bench of CONTROL_tb is
    component CONTROL
    port (
        clk : IN STD_LOGIC;
        srst : IN STD_LOGIC;
        valid_in : in std_logic;
        new_image : in std_logic;
        lline : out std_logic_vector(1 downto 0);
        column : out std_logic_vector(1 downto 0);
        valid_out: OUT STD_LOGIC;      
        image_finished: OUT STD_LOGIC        
        );
    end component;

--Input Signals
    signal clk : std_logic := '0';
    signal srst: std_logic := '0';
    signal valid_in : std_logic := '0';
    signal new_image : std_logic := '0';

 --Output Signals
    signal lline :  std_logic_vector(1 downto 0);
    signal column : std_logic_vector(1 downto 0);
    signal valid_out: STD_LOGIC;
    signal image_finished: STD_LOGIC;


    
    --Clock
    constant CLK_PERIOD : time := 10ns;

begin
    UUT: CONTROL port map(   
        clk => clk,
        srst => srst,
        valid_in => valid_in,
        new_image => new_image,
        lline => lline,
        column => column,
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

    test:process
         begin
            wait for clk_period/2;
            --srst <= '1';        
            --wait for clk_period;
            --srst <= '0'; 
               
            valid_in <= '1';
            wait for 20*clk_period;
 

            wait ;
         end process;         
end test_bench ; -- test_bench