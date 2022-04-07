library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity COMPUTE_UNIT_tb is
end COMPUTE_UNIT_tb;

architecture test_bench of COMPUTE_UNIT_tb is
    component COMPUTE_UNIT
    port (
        clk : IN STD_LOGIC;
        srst : IN STD_LOGIC;
        s00 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s01 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s02 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s10 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s11 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s12 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s20 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s21 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s22 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        lline : IN std_logic_vector(1 downto 0);
        column : IN std_logic_vector(1  downto 0);
        R : out std_logic_vector(7 downto 0);
        G : out std_logic_vector(7 downto 0);
        B : out std_logic_vector(7 downto 0)
    );
    end component;

--Input Signals
    signal clk : std_logic := '0';
    signal srst: std_logic := '0';
    signal s00 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s01 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s02 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s10 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s11 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s12 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s20 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s21 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s22 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal lline : std_logic_vector(1 downto 0);
    signal column : std_logic_vector(1 downto 0);
 --Output Signals
    signal R :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal G : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal B : STD_LOGIC_VECTOR(7 DOWNTO 0);
    
    --Clock
    constant CLK_PERIOD : time := 10ns;

begin
    UUT: deb port map(   
        clk => clk,
        srst => srst,
        lline => lline,
        column => column,
        s00 => s00,
        s01 => s01,
        s02 => s02,
        s10 => s10,
        s11 => s11,
        s12 => s12,
        s20 => s20,
        s21 => s21,
        s22 => s22,
        R => R,
        G => G,
        B => B
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
            lline <=  "00";
            column <= "00";
            s00 <=  "00000001";
            s01 <=  "00000010";
            s02 <=  "00000011";
            s10 <=  "00000100";
            s11 <=  "00000101";
            s12 <=  "00000110";
            s20 <=  "00000111";
            s21 <=  "00001000";
            s22 <=  "00001001";
            wait for clk_period;
 

            wait ;
         end process;         
end test_bench ; -- test_bench