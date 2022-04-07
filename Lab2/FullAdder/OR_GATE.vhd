library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity OR_GATE is
    Port (
        O_or: out STD_LOGIC;
        A_or: in STD_LOGIC;
        B_or: in STD_LOGIC
    );
end OR_GATE;

architecture Dataflow of OR_GATE is

begin
    O_or <= A_or or B_or;
end Dataflow;
