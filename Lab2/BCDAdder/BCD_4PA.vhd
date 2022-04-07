library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity BCD_4PA is
    Port( A: in STD_LOGIC_VECTOR(15 downto 0);
          B: in STD_LOGIC_VECTOR(15 downto 0);
          BCD_4PA_Cin: in STD_LOGIC;
          S: out STD_LOGIC_VECTOR(15 downto 0);
          BCD_4PA_Cout: out STD_LOGIC
         );
end BCD_4PA;

architecture Structural of BCD_4PA is
    component BCD_FA is
        port(   A: in STD_LOGIC_VECTOR(3 downto 0);
                B: in STD_LOGIC_VECTOR(3 downto 0);
                BCD_FA_Cin: in STD_LOGIC;
                S: out STD_LOGIC_VECTOR(3 downto 0);
                BCD_FA_Cout: out STD_LOGIC
            );
    end component;

    signal c0, c1, c2: STD_LOGIC; 

begin
    BCD0 : BCD_FA port map(
                        A => A(3 downto 0),
                        B => B(3 downto 0),
                        BCD_FA_Cin => BCD_4PA_Cin,
                        S => S(3 downto 0),
                        BCD_FA_Cout => c0
                        );
    BCD1 : BCD_FA port map(
                        A => A(7 downto 4),
                        B => B(7 downto 4),
                        BCD_FA_Cin => c0,
                        S => S(7 downto 4),
                        BCD_FA_Cout => c1
                        );
    BCD2 : BCD_FA port map(
                        A => A(11 downto 8),
                        B => B(11 downto 8),
                        BCD_FA_Cin => c1,
                        S => S(11 downto 8),
                        BCD_FA_Cout => c2
                        );
    BCD3 : BCD_FA port map(
                        A => A(15 downto 12),
                        B => B(15 downto 12),
                        BCD_FA_Cin => c2,
                        S => S(15 downto 12),
                        BCD_FA_Cout => BCD_4PA_Cout
                        );
end Structural ; -- Structural