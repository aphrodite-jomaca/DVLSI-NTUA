library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.math_real.all;

entity FIR_parallel is
        generic (
                M : integer := 8;
                data_width : integer := 8;
                coeff_width : integer := 8
                );
        Port (
                clk : in std_logic;
                rst : in std_logic;
                valid_in :in std_logic;
                x1 : in std_logic_vector(data_width-1 downto 0);
                x2 : in std_logic_vector(data_width-1 downto 0);
                valid_out : out std_logic;
                fir_out1 : out std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);
                fir_out2 : out std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0)
            );
end FIR_parallel;

architecture Behavioral of FIR_parallel is
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
 
    signal reg11, reg21, reg31, reg41, reg51, reg61, reg71 : std_logic_vector (2*data_width downto 0); 
    signal reg12, reg22, reg32, reg42, reg52, reg62, reg72 : std_logic_vector (data_width-1 downto 0);
    signal  tmp_sum10, tmp_sum11, tmp_sum12, tmp_sum13, tmp_sum14, tmp_sum15, tmp_sum16, 
            tmp_sum20, tmp_sum21, tmp_sum22, tmp_sum23, tmp_sum24, tmp_sum25, tmp_sum26:std_logic_vector(data_width+coeff_width+integer(ceil(log2(real(M))))-1 downto 0);
    signal valid8, valid9: std_logic;

begin 
    CELL10:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => x1, coeff => "00000001", partial_sum => (others => '0'), mac_out => tmp_sum10
                 );
    CELL20:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => x2, coeff => "00000001", partial_sum => (others => '0'), mac_out => tmp_sum20
                );
---------------------------------------------------------------------------------------------------------
    CELL11:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg12, coeff => "00000010", partial_sum => tmp_sum10, mac_out => tmp_sum11
                 );
    CELL21:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg11(7 downto 0), coeff => "00000010", partial_sum => tmp_sum20, mac_out => tmp_sum21
                );
---------------------------------------------------------------------------------------------------------   
    CELL12:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg22, coeff => "00000011", partial_sum => tmp_sum11, mac_out => tmp_sum12
                 );
    CELL22:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg21(7 downto 0), coeff => "00000011", partial_sum => tmp_sum21, mac_out => tmp_sum22
                );                 
---------------------------------------------------------------------------------------------------------
    CELL13:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg32, coeff => "00000100", partial_sum => tmp_sum12, mac_out => tmp_sum13
                 );
    CELL23:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg31(7 downto 0), coeff => "00000100", partial_sum => tmp_sum22, mac_out => tmp_sum23
                );
---------------------------------------------------------------------------------------------------------    
    CELL14:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg42, coeff => "00000101", partial_sum => tmp_sum13, mac_out => tmp_sum14
                 );
    CELL24:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg41(7 downto 0), coeff => "00000101", partial_sum => tmp_sum23, mac_out => tmp_sum24
                );
---------------------------------------------------------------------------------------------------------
    CELL15:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg52, coeff => "00000110", partial_sum => tmp_sum14, mac_out => tmp_sum15
                 );
    CELL25:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg51(7 downto 0), coeff => "00000110", partial_sum => tmp_sum24, mac_out => tmp_sum25
                );
---------------------------------------------------------------------------------------------------------                
    CELL16:MAC_pipelined  
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg62, coeff => "00000111", partial_sum => tmp_sum15, mac_out => tmp_sum16
                 );
    CELL26:MAC_pipelined  
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg61(7 downto 0), coeff => "00000111", partial_sum => tmp_sum25, mac_out => tmp_sum26
                );
---------------------------------------------------------------------------------------------------------                   
    CELL17:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg72, coeff => "00001000", partial_sum => tmp_sum16, mac_out => fir_out1
                 );
    CELL27:MAC_pipelined 
        generic map (M => M,    data_width => data_width,   coeff_width => coeff_width)
        port map (  clk => clk, rst => rst, valid_in => valid_in,
                    x => reg71(7 downto 0), coeff => "00001000", partial_sum => tmp_sum26, mac_out => fir_out2
                );
---------------------------------------------------------------------------------------------------------                   
   
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
                valid8 <= reg71(16);
                
                reg72 <= reg71(15 downto 8);
                reg71(16) <= reg61(16);
                reg71(15 downto 8) <= reg61(7 downto 0);
                reg71(7 downto 0) <= reg62;

                reg62 <= reg61(15 downto 8);
                reg61(16) <= reg51(16);
                reg61(15 downto 8) <= reg51(7 downto 0);
                reg61(7 downto 0) <= reg52;

                reg52 <= reg51(15 downto 8);
                reg51(16) <= reg41(16);
                reg51(15 downto 8) <= reg41(7 downto 0);
                reg51(7 downto 0) <= reg42;

                reg42 <= reg41(15 downto 8);
                reg41(16) <= reg31(16);
                reg41(15 downto 8) <= reg31(7 downto 0);
                reg41(7 downto 0) <= reg32;

                reg32 <= reg31(15 downto 8);
                reg31(16) <= reg21(16);
                reg31(15 downto 8) <= reg21(7 downto 0);
                reg31(7 downto 0) <= reg22;

                reg22 <= reg21(15 downto 8);
                reg21(16) <= reg11(16);
                reg21(15 downto 8) <= reg11(7 downto 0);
                reg21(7 downto 0) <= reg12;

                reg12 <= reg11(15 downto 8);
                reg11(16) <= valid_in;
                reg11(15 downto 8) <= x2;
                reg11(7 downto 0) <= x1;
            else
                valid9 <= '0';
            end if; 
        end if;
    end process;

end Behavioral;