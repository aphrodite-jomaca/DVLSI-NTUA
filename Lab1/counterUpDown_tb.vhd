library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity counter_tb is
end counter_tb;

architecture bench of counter_tb is
component counter
port(   
        clk, resetn, dir , count_en : in std_logic;
        sum : out std_logic_vector(2 downto 0);
        cout : out std_logic);
end component;
  
  --Input Signals
    signal clk : std_logic := '0';
    signal dir : std_logic := '1';
    signal count_en: std_logic := '0';
    signal resetn: std_logic := '0';
    
    --Output Signals
    signal cout: std_logic;
    signal sum: std_logic_vector(2 downto 0);
    
    --Clock
    constant CLK_PERIOD : time := 10ps;


begin
UUT: counter port map(
        clk => clk, dir => dir,
        count_en => count_en, resetn => resetn,
        cout => cout, sum => sum
        );
        
    clk_proc: process
    begin
        clk <= '0';
        wait for CLK_PERIOD / 2;
        clk <= '1';
        wait for CLK_PERIOD / 2;
    end process;
    
     stimulus: process
        begin
        -- Test count up with upper limit
        count_en <= '1';
        resetn <= '1';
        dir <= '1';
        wait for 12*CLK_PERIOD;    -- output must be 001

        dir <= '0';
        wait for 8*CLK_PERIOD;    -- output must be 001
        
        count_en <= '0';
        wait for 3*CLK_PERIOD;    -- output must be 2

        resetn <= '0';            -- output must be zero
        wait for 3*CLK_PERIOD;     
    end process;
end bench;