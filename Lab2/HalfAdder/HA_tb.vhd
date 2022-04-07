library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity HA_tb is
end HA_tb;

architecture test_bench of HA_tb is

component HA 
port(
    a_ha: in STD_LOGIC;
    b_ha: in STD_LOGIC;
    s_ha: out STD_LOGIC;
    c_ha: out STD_LOGIC
    );
end component;

--Input Signals
signal a_ha: STD_LOGIC:='0';
signal b_ha: STD_LOGIC:='0';

--Output Signals
signal s_ha: STD_LOGIC;
signal c_ha: STD_LOGIC;

begin

UUT: HA port map(
    a_ha=>a_ha,
    b_ha=>b_ha,
    s_ha=>s_ha,
    c_ha=>c_ha
    );
    
tests: process
begin
    a_ha<='0';
    b_ha<='0';
    -- expected output s=0 c=0
    wait for 10 ps;
    a_ha<='0';
    b_ha<='1';
    -- expected output s=1 c=0
    wait for 10 ps;
    a_ha<='1';
    b_ha<='0';
    -- expected output s=1 c=0
    wait for 10 ps;
    a_ha<='1';
    b_ha<='1';
    wait for 10 ps;
    wait;
    -- expected output s=0 c=1
end process;

end test_bench;