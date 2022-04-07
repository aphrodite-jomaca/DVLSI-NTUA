library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;


entity ControlUnit is
    Port (
            clk : in std_logic;
            valid_in : in std_logic;
            rom_address : out std_logic_vector(2 downto 0);
            mac_init : out std_logic;
            ram_address : out std_logic_vector(2 downto 0);
            we : out std_logic;
            valid_out: out std_logic               
         );
end ControlUnit;

architecture Behavioral of ControlUnit is
    signal counter : std_logic_vector(2 downto 0):= (others => '0');
    signal temp_valid_out :std_logic_vector(9 downto 0 ):= (others => '0'); 
begin
    process(clk)
        begin 
        if(rising_edge(clk)) then
            if counter  = "000" then
                we<= valid_in;
                mac_init<= '1';
                temp_valid_out(0) <= valid_in;
            else 
                temp_valid_out(0) <= valid_in;
                we<= valid_in;
                mac_init <= '0';
            end if;
            ram_address <= counter;
            rom_address <= counter;         
            counter <= counter + 1;
            valid_out <= temp_valid_out(9);
        end if;
    end process;
    
    process(clk)
        begin
            if (rising_edge(clk)) then
                    temp_valid_out(9 downto 1)<= temp_valid_out(8 downto 0);
            end if;                 
        end process;
 
end Behavioral;