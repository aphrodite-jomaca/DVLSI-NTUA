library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use ieee.math_real.all;


entity S2P is
    generic(
        N: integer  := 1024
    );  
    port (
        clk : IN STD_LOGIC;
        srst : IN STD_LOGIC_vector(0 downto 0);
        pixel : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
        valid_pxl : IN STD_LOGIC;
        s00 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s01 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s02 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s10 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s11 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s12 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s20 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s21 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        s22 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
        valid_out: OUT STD_LOGIC
        
    );
end S2P;

architecture Behavioral of s2p is
    COMPONENT fifo_generator_0
        PORT (
            clk : IN STD_LOGIC;
            srst : IN STD_LOGIC_vector(0 downto 0);
            din : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
            wr_en : IN STD_LOGIC;
            rd_en : IN STD_LOGIC;
            dout : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
            full : OUT STD_LOGIC;
            empty : OUT STD_LOGIC;
            valid : OUT STD_LOGIC;
            data_count : OUT STD_LOGIC_VECTOR(9 DOWNTO 0)
            );
    END COMPONENT;

    type arr is array (2 downto 0) of std_logic_vector (7 downto 0);
    signal L0 : arr := (others => (others => '0'));
    signal L1 : arr := (others => (others => '0'));
    signal L2 : arr := (others => (others => '0'));
    signal counter : std_logic_vector(integer(ceil(log2(real(N*N)))) downto 0) :=  (others => '0') ;
    signal fout2, fout1, fout0 : std_logic_vector(7 downto 0) :=  (others => '0') ;
    signal  rd_en0: std_logic := '0';
    signal  rd_en1: std_logic := '0';
    signal  rd_en2: std_logic := '0';
    signal  wr_en0: std_logic := '1';
    signal  wr_en1: std_logic := '1';
    signal  wr_en2: std_logic := '1';
    signal full0, full1, full2, empty0, empty1, empty2, valid0, valid1, valid2: std_logic;
    signal datacount0, datacount1, datacount2: std_logic_vector(9 downto 0); 

begin
    RAM_FIFO_0 : fifo_generator_0
    PORT MAP (
        clk => clk,
        srst => srst,
        din => pixel,
        wr_en => wr_en0, 
        rd_en => rd_en0,
        dout => fout0,
        full => full0,
        empty => empty0,
        valid => valid0,
        data_count => datacount0
    );
    RAM_FIFO_1 : fifo_generator_0
    PORT MAP (
        clk => clk,
        srst => srst,
        din => fout0,
        wr_en => wr_en1,
        rd_en => rd_en1,
        dout => fout1,
        full => full1,
        empty => empty1,
        valid => valid1,
        data_count => datacount1
    );    
    RAM_FIFO_2 : fifo_generator_0
    PORT MAP (
        clk => clk,
        srst => srst,
        din => fout1,
        wr_en => wr_en2,
        rd_en => rd_en2,
        dout => fout2,
        full => full2,
        empty => empty2,
        valid => valid2,
        data_count => datacount2
    );

    process(clk, srst, datacount0)
    begin
        if to_integer(unsigned(srst)) = 1 then
            rd_en0 <= '0';  rd_en1 <= '0';  rd_en2 <= '0';
            valid_out <= '0';  counter <= (others => '0');
        elsif rising_edge(clk) then
            if valid_pxl = '1' then
                counter <= counter + 1;
                if  to_integer(unsigned(counter)) = 2*N+3 then
                    valid_out <= '1';
                end if;
                if to_integer(unsigned(datacount0)) = N-3 then
                    rd_en0 <= '1';
                    rd_en1 <= '1';
                    rd_en2 <= '1';
                end if;
                L0 <= L0(1 downto 0) & fout0;
                L1 <= L1(1 downto 0) & fout1;
                L2 <= L2(1 downto 0) & fout2;
                s00 <= L0(0); s01 <= L0(1); s02 <= L0(2);
                s10 <= L1(0); s11 <= L1(1); s12 <= L1(2);
                s20 <= L2(0); s21 <= L2(1); s22 <= L2(2);  
            end if;         
        end if ;
    end process;
 

end Behavioral ; -- Behavioral