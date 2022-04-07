library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

entity BCD_FA_tb is
end BCD_FA_tb;

architecture test_bench of BCD_FA_tb is
    component BCD_FA
        port(   
            A: in STD_LOGIC_VECTOR(3 downto 0);
            B: in STD_LOGIC_VECTOR(3 downto 0);
            BCD_FA_Cin: in STD_LOGIC;
            S: out STD_LOGIC_VECTOR(3 downto 0);
            BCD_FA_Cout: out STD_LOGIC
            );
    end component;
    
    signal A_tb, B_tb: STD_LOGIC_VECTOR(3 downto 0) := "0000";
    signal BCD_FA_Cin_tb: STD_LOGIC; 
    signal S_tb: STD_LOGIC_VECTOR(3 downto 0);
    signal BCD_FA_Cout_tb: STD_LOGIC;

begin
    UUT: BCD_FA port map(
                        A => A_tb,
                        B => B_tb,
                        BCD_FA_Cin => BCD_FA_Cin_tb,
                        S => S_tb,
                        BCD_FA_Cout => BCD_FA_Cout_tb
                        );
    test:process
         begin
            A_tb <="0101"; -- 5
            B_tb <="0000"; -- 0
            BCD_FA_Cin_tb <='0';
            wait for 10 ps; -- sum = 5 = 0000 0101

            A_tb <="0101"; -- 5
            B_tb <="0110"; -- 6
            wait for 10 ps; -- sum = 11 = 0001 0001

            A_tb <="0101"; -- 5
            B_tb <="0111"; -- 7
            wait for 10 ps; -- sum = 12 = 0001 0010

            A_tb <="1001"; -- 9
            B_tb <="0110"; -- 6       
            wait for 10 ps; -- sum = 15 = 0001 0101

            A_tb <="1001"; -- 9
            B_tb <="1001"; -- 9
            wait for 10 ps; -- sum = 18 = 0001 1000

         end process;         
end test_bench ; -- test_bench