library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity dec3to8 is
  port (
        enc : in  std_logic_vector(2 downto 0);
        dec : out std_logic_vector(7 downto 0)
        ) ;
end entity;

architecture bh_arch of dec3to8 is 

begin

    DEC_LOGIC : process(enc)
    begin
        case enc is
        
            when "000" =>
                dec <= "00000001";
            when "001" =>
                dec <= "00000010";
            when "010" =>
                dec <= "00000100";
            when "011" =>
                dec <= "00001000";               
            when "100" =>
                dec <= "00010000";
            when "101" =>
                dec <= "00100000";
            when "110" =>
                dec <= "01000000";
            when others =>
                dec <= "10000000";       
        end case ;
    end process ; -- DEC_LOGIC

end bh_arch ; -- bh_arch

architecture df_arch of dec3to8 is

begin

    with enc select dec <=
        "00000001" when "000",
        "00000010" when "001",
        "00000100" when "010",
        "00001000" when "011",
        "00010000" when "100",
        "00100000" when "101",
        "01000000" when "110",
        "10000000" when others;

end df_arch ; -- df_arch