library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity RCA is
    Port( x: in STD_LOGIC_VECTOR(3 downto 0);
          y: in STD_LOGIC_VECTOR(3 downto 0);
          RCA_Cin: in STD_LOGIC;
          s: out STD_LOGIC_VECTOR(3 downto 0);
          RCA_Cout: out STD_LOGIC
         );
end RCA;

architecture Structural of RCA is
component FA_comb_beh is
    port( A: in STD_LOGIC;
          B: in STD_LOGIC;
          C_in : in STD_LOGIC;
          C_out: out STD_LOGIC;
          SUM: out STD_LOGIC
        );
end component;
signal c: STD_LOGIC_VECTOR(2 downto 0);

begin

fa_1 : FA_comb_beh
        port map(
            A => x(0),
            B => y(0),
            C_in => RCA_Cin,
            C_out => c(0),
            SUM => s(0)
        );
           
fa_2 : FA_comb_beh 
        port map (
            A => x(1),
            B => y(1),
            C_in => c(0),
            C_out => c(1),
            SUM => s(1)
        );
fa_3 : FA_comb_beh
        port map (
            A => x(2),
            B => y(2),
            C_in => c(1),
            C_out => c(2),
            SUM => s(2)
        );

fa_4 : FA_comb_beh
        port map (
            A => x(3),
            B => y(3),
            C_in => c(2),
            C_out => RCA_Cout,
            SUM => s(3)
        );
end Structural;