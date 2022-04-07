library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity SYS_MUL_tb is
end SYS_MUL_tb;

architecture test_bench of SYS_MUL_tb is

    component SYS_MUL
        port (
                A: in std_logic_vector (3 downto 0);
                B: in std_logic_vector (3 downto 0);
                clk: in std_logic;
                P: out std_logic_vector (7 downto 0)
                );
    end component;

--Input Signals
    signal A_tb, B_tb: std_logic_vector (3 downto 0):= (others=>'0');
    signal clk: std_logic:='0';

--Output Signals
    signal P_tb: std_logic_vector(7 downto 0);

--Clock
    constant CLKP : time := 10ns;

begin
UUT: SYS_MUL port map(
                    A => A_tb,
                    B => B_tb,
                    clk => clk,
                    P => P_tb (7 downto 0)
                    );

clk_proc: process
    begin
        clk <= '0';
        wait for CLKP/2;
        clk <= '1';
        wait for CLKP/2;
    end process;


tests: process
begin

        A_tb<="0001";   --1
        B_tb<="0011";   --3
        wait for CLKP;  --3

        A_tb<="0010";   --2
        B_tb<="0100";   --4
        wait for CLKP;  --8

        A_tb<="0010";   --2
        B_tb<="1111";   --15
        wait for CLKP;  --30

        A_tb<="0000";
        B_tb<="0001";
        wait for CLKP;

        A_tb<="1111";
        B_tb<="1111";
        wait for CLKP;

        A_tb<="0001";
        B_tb<="0001";
        wait for CLKP;

        A_tb<="0100"; --4
        B_tb<="1011"; --11
        wait for CLKP;
        
        A_tb<="0100"; --4
        B_tb<="1001"; --9
        wait for CLKP;
        
        A_tb<="0000";
        B_tb<="1011";
        wait for CLKP;
        
        A_tb<="0011"; --3
        B_tb<="1000"; --8
        wait for CLKP;
        
        A_tb<="0100";
        B_tb<="0001";
        wait for CLKP;
        
        A_tb<="0000";
        B_tb<="1011";
        wait;

end process;

end test_bench;