library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.math_real.all;

entity FIR_pipelined is
        generic (
                M : integer := 8;
                data_width : integer := 8;
                coeff_width : integer := 8
                );
        Port (
                clk : in std_logic;
                rst : in std_logic;
                valid_in :in std_logic;
                x : in std_logic_vector(data_width-1 downto 0);
                valid_out : out std_logic;
                fir_out : out std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0)
            );
end FIR_pipelined;

architecture Behavioral of FIR_pipelined is
    component MAC_pipelined is
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
    end component;
 
    signal reg11, reg21, reg31, reg41, reg51, reg61, reg71 : std_logic_vector (data_width downto 0); 
    signal reg12, reg22, reg32, reg42, reg52, reg62, reg72 : std_logic_vector (data_width-1 downto 0);
    signal tmp_sum0, tmp_sum1, tmp_sum2, tmp_sum3, tmp_sum4, tmp_sum5, tmp_sum6:std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);
    signal valid8, valid9: std_logic;

begin 
    CELL0:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => x, coeff => "00000001", partial_sum => (others => '0'), mac_out => tmp_sum0
                 );

    CELL1:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg12, coeff => "00000010", partial_sum => tmp_sum0, mac_out => tmp_sum1
                 );
    
    CELL2:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg22, coeff => "00000011", partial_sum => tmp_sum1, mac_out => tmp_sum2
                 );

    CELL3:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg32, coeff => "00000100", partial_sum => tmp_sum2, mac_out => tmp_sum3
                 );
    
    CELL4:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg42, coeff => "00000101", partial_sum => tmp_sum3, mac_out => tmp_sum4
                 );
    
    CELL5:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg52, coeff => "00000110", partial_sum => tmp_sum4, mac_out => tmp_sum5
                 );
                
    CELL6:MAC_pipelined  
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg62, coeff => "00000111", partial_sum => tmp_sum5, mac_out => tmp_sum6
                 );
    
    CELL7:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg72, coeff => "00001000", partial_sum => tmp_sum6, mac_out => fir_out
                 );
    
    valid_out <= valid9;

    process(clk,rst)
    begin
        if rst = '1' then
            
            reg11 <= (others => '0'); reg21 <= (others => '0'); reg31 <= (others => '0'); reg41 <= (others => '0');
            reg51 <= (others => '0'); reg61 <= (others => '0'); reg71 <= (others => '0');
            
            reg12 <= (others => '0'); reg22 <= (others => '0'); reg32 <= (others => '0'); reg42 <= (others => '0');
            reg52 <= (others => '0'); reg62 <= (others => '0'); reg72 <= (others => '0');

            valid8 <= '0'; valid9 <= '0';

        elsif rising_edge(clk) then

            if valid_in='1' then
                valid9 <= valid8;
                valid8 <= reg71(8);
                reg72 <= reg71(7 downto 0);
                reg71(7 downto 0) <= reg62;
                reg71(8) <= reg61(8);
                reg62 <= reg61(7 downto 0);
                reg61(7 downto 0) <= reg52;
                reg61(8) <= reg51(8);
                reg52 <= reg51(7 downto 0);
                reg51(7 downto 0) <= reg42;
                reg51(8) <= reg41(8);
                reg42 <= reg41(7 downto 0);
                reg41(7 downto 0) <= reg32;
                reg41(8) <= reg31(8);
                reg32 <= reg31(7 downto 0);
                reg31(7 downto 0) <= reg22;
                reg31(8) <= reg21(8);
                reg22 <= reg21(7 downto 0);
                reg21(7 downto 0) <= reg12;
                reg21(8) <= reg11(8);
                reg12 <= reg11(7 downto 0);
                reg11(7 downto 0) <= x;
                reg11(8) <= valid_in;
            else
                valid9 <= '0';
            end if; 
        end if;
    end process;

end Behavioral;