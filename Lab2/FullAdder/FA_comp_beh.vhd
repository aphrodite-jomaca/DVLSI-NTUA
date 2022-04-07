library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity FA_comb_beh is
        Port ( A: in STD_LOGIC;
               B: in STD_LOGIC;
               C_in: in STD_LOGIC;
               C_out: out STD_LOGIC;
               SUM: out STD_LOGIC );
end FA_comb_beh;

architecture Behavioral of FA_comb_beh is
signal temp: std_logic_vector(1 downto 0);
begin
    process(A,B,C_in,temp)
        begin
        temp<= ('0'& a) + ('0'& b )+ ('0'& c_in);
        SUM <= temp(0);
        C_out <= temp(1);
    end process;

end Behavioral;