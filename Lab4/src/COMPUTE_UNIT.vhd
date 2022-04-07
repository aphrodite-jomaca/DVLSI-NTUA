library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use ieee.math_real.all;

entity COMPUTE_UNIT is   
    generic( N: integer := 1024);
    port(
        clk : IN STD_LOGIC;
        srst : IN STD_LOGIC_vector(0 downto 0);
        s00 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s01 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s02 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s10 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s11 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s12 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s20 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s21 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        s22 : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        lline : IN std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0);
        column : IN std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0);
        R : out std_logic_vector(7 downto 0);
        G : out std_logic_vector(7 downto 0);
        B : out std_logic_vector(7 downto 0)
    );
end COMPUTE_UNIT;

architecture Behavioral of COMPUTE_UNIT is

    signal d4, d3, d2, d1, right, left, cc, up, down : std_logic_vector(7 downto 0);
    signal validout : std_logic;
    signal temp0 : std_logic_vector(9 downto 0);
    signal temp1 : std_logic_vector(9 downto 0);
    signal temp2 : std_logic_vector(8 downto 0);
    signal temp3 : std_logic_vector(8 downto 0);
    signal mv_ud : std_logic_vector(7 downto 0);
    signal mv_lr : std_logic_vector(7 downto 0);
    signal mv_d : std_logic_vector(7 downto 0);
    signal mv_t : std_logic_vector(7 downto 0);

    begin 

    --+--------------------+
    --|  d1  |  up  |  d2  |
    --| left |  cc  | right|
    --|  d3  | down |  d4  |
    --+--------------------+

    temp0 <= ("00" & left) + ("00" & right)  + ("00" & up) + ("00" & down);
    temp1 <= ("00" & d1) + ("00" & d2)  + ("00" & d3) + ("00" & d4);
    temp2 <= ('0' & up) + ('0' & down);
    temp3 <= ('0' & left) + ('0' & right);
    mv_t  <= temp0(9 downto 2) ;
    mv_d  <= temp1(9 downto 2) ;
    mv_ud <= temp2(8 downto 1) ;
    mv_lr <= temp3(8 downto 1) ;
    

    d1 <= s22 when to_integer(unsigned(lline)) /= 0 and to_integer(unsigned(column)) /= 0 else (others => '0');
    up <= s21 when to_integer(unsigned(lline)) /= 0 else (others => '0');
    d2 <= s20 when to_integer(unsigned(lline)) /= 0 and to_integer(unsigned(column)) /= N-1 else (others => '0');
    left <= s12 when  to_integer(unsigned(column)) /= 0 else (others => '0');
    cc <= s11;
    right <= s10 when to_integer(unsigned(column)) /= N-1 else (others => '0');
    d3 <= s02 when to_integer(unsigned(lline)) /= N-1 and to_integer(unsigned(column)) /= 0 else (others => '0');
    down <= s01 when to_integer(unsigned(lline)) /= N-1  else (others => '0');
    d4 <= s00 when to_integer(unsigned(lline)) /= N-1 and to_integer(unsigned(column)) /= N-1 else (others => '0');
    
    process(clk, srst)
    begin
        if to_integer(unsigned(srst)) = 1 then
            --image_finished <= '0';
        elsif rising_edge(clk)  then
            if lline(0) = '0' then 
                if column(0) ='0' then --green
                    R <= mv_ud;
                    G <= cc;
                    B <= mv_lr;
                else                    --blue
                    R <= mv_d;
                    G <= mv_t;
                    B <= cc;
                end if;
            else 
                if column(0) ='0' then  --red
                    R <= cc;
                    G <= mv_t;
                    B <= mv_d;
                else                    --green
                    R <= mv_lr;
                    G <= cc;
                    B <= mv_ud;
                end if;
            end if;
        end if;
    end process;
  
    
end Behavioral ;