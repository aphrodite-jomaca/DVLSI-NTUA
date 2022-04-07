library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity shift_reg is
    port(
        clk,rst,si,en,pl,rl: in std_logic;
        din: in std_logic_vector(3 downto 0);
        so: out std_logic
        );
end shift_reg;

architecture rtl of shift_reg is 
    
    signal dff: std_logic_vector(3 downto 0);

begin 
    edge: process(clk,rst)
        begin
            if rst='0' then
                dff <= (others => '0');
            elsif clk'event and clk='1' then
                if pl='1' then
                    dff <= din;
                elsif en='1' then
                    case rl is 
                        when '0' =>     -- rl=0 -> right // rl=1 -> left
                            dff <= si&dff(3 downto 1);                     
                        when others =>
                            dff <= dff(2 downto 0)&si;
                    end case ;
                end if;
            end if;
    end process;
    with rl select so <=
        dff(0) when '0',
        dff(3) when others;
end rtl;