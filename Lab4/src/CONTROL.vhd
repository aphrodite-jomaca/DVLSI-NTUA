library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use ieee.math_real.all;


entity CONTROL is
    generic(
        N: integer  := 1024
    );  
    port (
        clk : IN STD_LOGIC;
        srst : IN STD_LOGIC_vector(0 downto 0);
        new_image : in std_logic;
        start_deb: in STD_LOGIC;
        lline : out std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0);
        column : out std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0);
        valid_out: OUT STD_LOGIC;       
        image_finished: OUT STD_LOGIC        
        );
end CONTROL;

architecture Behavioral of CONTROL is
    
    signal column_reg : std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0)  :=  (others => '0');
    signal line_reg : std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0)  :=  (others => '0');
    signal tmp_img_fin : std_logic := '0';
begin
    
    column <= column_reg;
    lline <= line_reg;
   
    process(clk, srst)
    begin
        if srst = "1" then
            line_reg <= (others => '0') ;
            column_reg <= (others => '0') ;
            valid_out <= '0';
        elsif rising_edge(clk) then 
            valid_out <= '0';
            if start_deb = '1' then
                    valid_out <= '1';
                    column_reg <= column_reg + 1;
                    if to_integer(unsigned(column_reg)) = N-1 then
                        line_reg <= line_reg + 1;
                    end if;
            end if;               
            if (tmp_img_fin = '1') then
                valid_out <= '0';
            end if;
            if (to_integer(unsigned(line_reg)) = N-1 and to_integer(unsigned(column_reg)) = N-1) then
                image_finished <= '1';
                tmp_img_fin <= '1';
            else 
                image_finished <= '0';
            end if;
        end if;
    end process;
    
    
end Behavioral ; -- Behavioral
