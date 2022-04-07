library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

entity BCD_4PA_tb is
end BCD_4PA_tb;

architecture test_bench of BCD_4PA_tb is
    component BCD_4PA
        port(   
            A: in STD_LOGIC_VECTOR(15 downto 0);
            B: in STD_LOGIC_VECTOR(15 downto 0);
            BCD_4PA_Cin: in STD_LOGIC;
            S: out STD_LOGIC_VECTOR(15 downto 0);
            BCD_4PA_Cout: out STD_LOGIC
            );
    end component;
    
    signal A_tb, B_tb: STD_LOGIC_VECTOR(15 downto 0) := "0000000000000000";
    signal BCD_4PA_Cin_tb: STD_LOGIC; 
    signal S_tb: STD_LOGIC_VECTOR(15 downto 0);
    signal BCD_4PA_Cout_tb: STD_LOGIC;

begin
    UUT: BCD_4PA port map(
                        A => A_tb,
                        B => B_tb,
                        BCD_4PA_Cin => BCD_4PA_Cin_tb,
                        S => S_tb,
                        BCD_4PA_Cout => BCD_4PA_Cout_tb
                        );
    test:process
         begin
            A_tb <="0001000000001111"; -- 1009/4111
            B_tb <="0000010100110001"; -- 531/1329
            BCD_4PA_Cin_tb <='0';
            wait for 10 ps; -- sum = 1540 = 0001 0101 0100 0000 / 5440

            A_tb <="0101000001010000"; -- 5050
            wait for 10 ps; -- sum = 5581 = 0101 0101 1000 0001

            A_tb <="0001001000010001"; -- 1211
            B_tb <="0000000100000001"; -- 101
            wait for 10 ps; -- sum = 1312 = 0001 0011 0001 0010

         end process;         
end test_bench ; -- test_bench