library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity s2p_tb is
end s2p_tb;

architecture test_bench of s2p_tb is
    component S2P
    port (
        clk : IN STD_LOGIC;
        srst : IN STD_LOGIC;
        pixel : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        valid_pxl : IN STD_LOGIC;
        s00 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s01 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s02 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s10 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s11 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s12 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s20 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s21 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s22 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        lol : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        valid_out: OUT STD_LOGIC
    );
    end component;

--Input Signals
    signal clk : std_logic := '0';
    signal srst: std_logic := '0';
    signal valid_pxl : std_logic := '0';
    signal pixel : STD_LOGIC_VECTOR(7 DOWNTO 0);
 --Output Signals
    signal s00 :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s01 :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s02 :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s10 :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s11 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s12 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s20 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s21 : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal s22 :  STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal lol : STD_LOGIC_VECTOR(7 DOWNTO 0);
    signal valid_out: STD_LOGIC;


    
    --Clock
    constant CLK_PERIOD : time := 10ns;

begin
    UUT: s2p port map(   
        clk => clk,
        srst => srst,
        pixel => pixel,
        valid_pxl => valid_pxl,
        s00 => s00,
        s01 => s01,
        s02 => s02,
        s10 => s10,
        s11 => s11,
        s12 => s12,
        s20 => s20,
        s21 => s21,
        s22 => s22,
        lol => lol,
        valid_out => valid_out
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
            --wait for clk_period/2;
            --srst <= '1';        
            --wait for clk_period;
            srst <= '0'; 
               
            valid_pxl <= '1';
            pixel <= "00000001";
            wait for clk_period;
            pixel <= "00000010";
            wait for clk_period;
            pixel <= "00000011";
            wait for clk_period;
            pixel <= "00000100";
            wait for clk_period;  
            pixel <= "00000101";
            wait for clk_period;              
            pixel <= "00000110";
            wait for clk_period;
            pixel <= "00000111";
            wait for clk_period;
            pixel <= "00001000";
            wait for clk_period;
            pixel <= "00001001";
            wait for clk_period;  
            pixel <= "00001010";
            wait for clk_period;
            pixel <= "00001011";
            wait for clk_period;
            pixel <= "00001100";
            wait for clk_period;
            pixel <= "00001101";
            wait for clk_period;
            pixel <= "00001110";
            wait for clk_period;
            pixel <= "00001111";
            wait for clk_period;
            pixel <= "00010000";
            wait for clk_period;  
            pixel <= "00010001";
            wait for clk_period;              
            pixel <= "00010010";
            wait for clk_period;
            pixel <= "00000001";
            wait for clk_period;
            pixel <= "00000001";
            wait for clk_period;
            pixel <= "00000001";
            wait for clk_period;  
            pixel <= "00000001";
            wait for clk_period; 
 

            wait ;
         end process;         
end test_bench ; -- test_bench