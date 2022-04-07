library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use ieee.math_real.all;

entity DEBAYERING is   
    generic( N: integer := 1024);
    port(
        clk :       in std_logic;
        rst_n :     in std_logic_vector(0 downto 0);
        valid_in :  in std_logic;
        pixel :     in std_logic_vector(7 downto 0);
        new_image : in std_logic;
        halt : in std_logic;
        R : out std_logic_vector(7 downto 0);
        G : out std_logic_vector(7 downto 0);
        B : out std_logic_vector(7 downto 0);
        valid_out :      out std_logic;
        image_finished : out std_logic
    );
end DEBAYERING;

architecture Behavioral of DEBAYERING is

    component s2p
        generic ( N: integer );
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
    end component;

    component COMPUTE_UNIT 
        generic ( N: integer );
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
    end component;

    component CONTROL
        generic ( N: integer );
        port (
            clk : IN STD_LOGIC;
            srst : IN STD_LOGIC_vector(0 downto 0);
            new_image : in std_logic;
            start_deb : in std_logic;
            lline : out std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0);
            column : out std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0);
            valid_out : out std_logic;
            image_finished: OUT STD_LOGIC        
            );
    end component;

    
    --signal counter : std_logic_vector(2*log2(N) downto 0);
    signal clk_gate : std_logic;
    signal valid : std_logic;
    signal counter : std_logic_vector (20 downto 0) :=  (others => '0');
    signal ss00, ss01, ss02, ss10, ss11, ss12, ss20, ss21, ss22  : std_logic_vector(7 downto 0) :=  (others => '0');
    signal liner, columnr : std_logic_vector(integer(ceil(log2(real(N))))-1 downto 0)  :=  (others => '0');
    signal startdeb : std_logic;
    signal valid_out1 : std_logic;

    begin    
        
    CTRL : CONTROL 
        generic map ( N => N )
        port map(
                clk => clk_gate,
                srst => rst_n,
                new_image => new_image,
                start_deb => startdeb,
                lline => liner,
                column => columnr,
                valid_out => valid_out1,
                image_finished => image_finished
        );

    CU : COMPUTE_UNIT 
        generic map ( N => N )
        port map(
            clk => clk_gate,
            srst => rst_n,
            s00 => ss00,
            s01 => ss01,
            s02 => ss02,
            s10 => ss10,
            s11 => ss11,
            s12 => ss12,
            s20 => ss20,
            s21 => ss21,
            s22 => ss22,
            lline => liner,
            column => columnr,
            R => R,
            G => G,
            B => B
        ); 

    S_2_P : S2P 
        generic map ( N => N )
        port map(
            clk => clk_gate,
            srst => rst_n,
            pixel => pixel,
            valid_pxl => valid,
            s00 => ss00,
            s01 => ss01,
            s02 => ss02,
            s10 => ss10,
            s11 => ss11,
            s12 => ss12,
            s20 => ss20,
            s21 => ss21,
            s22 => ss22,
            valid_out => startdeb
        );

    process(clk)
    begin
        if counter < N*N and valid_in = '1' then
            counter <= counter + 1;
        end if;
    end process;
    
    valid <= halt when counter = N*N else valid_in;
    valid_out <= (valid_out1 and halt) when counter = N*N else (valid_out1 and valid_in);
    clk_gate <= (clk and halt) when counter = N*N else (clk and valid_in);
    
end Behavioral ;