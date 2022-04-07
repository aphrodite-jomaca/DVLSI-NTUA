library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.math_real.all;

entity MAC_pipelined is
        generic (
                M : integer;
                data_width : integer;
                coeff_width : integer
                );
        Port ( 
            clk : in std_logic;
            rst : in std_logic;
            valid_in : in std_logic;
            x : in std_logic_vector (data_width-1 downto 0);
            coeff : in std_logic_vector (coeff_width-1 downto 0);
            partial_sum : in std_logic_vector (data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);
            mac_out : out std_logic_vector (data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0)
            );
end MAC_pipelined;

architecture Behavioral of MAC_pipelined is
    
    signal tmp_mul : std_logic_vector (data_width+coeff_width-1 downto 0);                                  -- output of multiplication
    signal tmp_sum : std_logic_vector (data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);     -- output of addition
    signal mul_reg : std_logic_vector (data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);     -- reg of multiplication
    signal sum_reg : std_logic_vector (data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);     -- reg of addition

begin
    
    tmp_mul <= x * coeff;
    tmp_sum <= mul_reg + partial_sum;
    mac_out <= sum_reg;

    process(rst,clk)
        begin
        if rst = '1' then
            mul_reg <= (others => '0');
            sum_reg <= (others => '0'); 
        elsif rising_edge(clk) then
            if valid_in = '1' then
                mul_reg(data_width+coeff_width-1 downto 0) <= tmp_mul;  
                mul_reg(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto data_width+coeff_width) <= (others => '0'); 
                sum_reg <= tmp_sum;
            end if;
        end if;
    end process;
    
end Behavioral;