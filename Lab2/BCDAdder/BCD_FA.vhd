library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity BCD_FA is
    Port( A: in STD_LOGIC_VECTOR(3 downto 0);
          B: in STD_LOGIC_VECTOR(3 downto 0);
          BCD_FA_Cin: in STD_LOGIC;
          S: out STD_LOGIC_VECTOR(3 downto 0);
          BCD_FA_Cout: out STD_LOGIC
         );
end BCD_FA;

architecture Structural of BCD_FA is
    component RCA is
        port(   x: in STD_LOGIC_VECTOR(3 downto 0);
                y: in STD_LOGIC_VECTOR(3 downto 0);
                RCA_Cin: in STD_LOGIC;
                s: out STD_LOGIC_VECTOR(3 downto 0);
                RCA_Cout: out STD_LOGIC
            );
    end component;

    signal s_tmp, offset: STD_LOGIC_VECTOR(3 downto 0);
    signal c_1, c_out: STD_LOGIC; 

begin
    rca_1: RCA
            port map(
                x => A,
                y => B,
                RCA_Cin => BCD_FA_Cin,
                s => s_tmp,
                RCA_Cout => c_1
            );
    c_out <= (s_tmp(3) and s_tmp(2)) or (s_tmp(3) and s_tmp(1)) or c_1;
    BCD_FA_Cout <= c_out; 
    offset <= '0' & c_out & c_out & '0';
    rca_2: RCA
            port map(
                x => s_tmp,
                y => offset,
                RCA_Cin => '0',
                s => S
            );
end Structural; -- Structural