library ieee;
use ieee.std_logic_1164.all;

entity adder is 
    port(
        a : in std_logic;
        b : in std_logic;
        s : out std_logic;
        c : out std_logic
    );
end adder;

architecture behavior of adder is
begin
    s <= a xor b after 1 ns;
    c <= a and b after 2 ns;
end behavior;
