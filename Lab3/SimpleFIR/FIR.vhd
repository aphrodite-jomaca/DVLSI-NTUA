library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.math_real.all;

entity FIR is
    generic(
        data_width :   integer    := 8;
        coeff_width:   integer    := 8;
        min_vector_size: integer  := 8
    );
    Port ( 
        clk: in std_logic;
        rst: in std_logic;
        valid_in : in std_logic;
        x: in std_logic_vector(data_width-1 downto 0);
        y: out std_logic_vector((data_width + coeff_width + integer(ceil(log2(real(min_vector_size)))))-1  downto 0);
        valid_out : out std_logic
        );
end FIR;

architecture Behavioral of FIR is
    component MAC is
        generic(
        data_width :   integer    := 8;
        coeff_width:   integer    := 8;
        min_vector_size: integer  := 8
    );
    port(
        rom_out: in std_logic_vector(data_width-1 downto 0);
        ram_out: in std_logic_vector(coeff_width-1 downto 0);
        mac_init : in std_logic;
        L: out std_logic_vector((data_width + coeff_width + integer(ceil(log2(real(min_vector_size)))))-1  downto 0);
        clk : in std_logic
    );
    end component;
    
    component mlab_rom is
    generic (
        coeff_width : integer :=8                  
    );
    port ( 
        clk     : in        STD_LOGIC;
        en      : in        STD_LOGIC;                
        addr    : in        STD_LOGIC_VECTOR (2 downto 0);            
        rom_out : out       STD_LOGIC_VECTOR (coeff_width-1 downto 0)
    );
    end component;
    
    component mlab_ram is
    generic (
        data_width : integer :=8                 
    );
   port (
        clk  : in std_logic;
        rst  : in std_logic;
        we   : in std_logic;                        
        en   : in std_logic;                
        addr : in std_logic_vector(2 downto 0);            
        di   : in std_logic_vector(data_width-1 downto 0);       
        do   : out std_logic_vector(data_width-1 downto 0)
    );     
    end component;
    
    component ControlUnit is
    Port (
       clk : in std_logic;
       valid_in : in std_logic;
       rom_address : out std_logic_vector(2 downto 0);
       mac_init : out std_logic;
       ram_address : out std_logic_vector(2 downto 0);
       we : out std_logic;
       valid_out: out std_logic               
    );
    end component;
    
    signal x_reg: std_logic_vector(data_width-1 downto 0);
    signal mac_init_reg: std_logic;   
    signal rom_address: std_logic_vector(2 downto 0);
    signal ram_address: std_logic_vector(2 downto 0);
    signal mac_init: std_logic;
    signal we:std_logic;
    signal ram_out: std_logic_vector(data_width-1 downto 0);
    signal rom_out: std_logic_vector(coeff_width-1 downto 0);
        
begin

CU: ControlUnit port map(
    clk => clk ,
    valid_in => valid_in,
    rom_address =>rom_address ,
    mac_init => mac_init,
    ram_address => ram_address,
    we => we ,
    valid_out =>valid_out
    );
        
RAM: mlab_ram port map(
    clk  => clk,
    rst  => rst,
    we   => we,                       
    en   => '1',               
    addr => ram_address,           
    di   => x_reg,     
    do   => ram_out    
    );
    
ROM: mlab_rom port map(
    clk  => clk,
    en   => '1',              
    addr => rom_address,              
    rom_out =>  rom_out    
    );
MC: MAC port map(
    rom_out  => rom_out,
    ram_out  => ram_out,
    mac_init => mac_init_reg,
    L => y,
    clk => clk
   );
   
process(clk)
  begin
    if(rising_edge(clk)) then
        x_reg <= x;
        mac_init_reg <= mac_init;
    end if;
end process;

end Behavioral;