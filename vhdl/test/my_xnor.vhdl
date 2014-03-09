library ieee;
use ieee.std_logic_1164.all;

entity my_xnor is
    port(
        a: in std_logic;
        b: in std_logic;
        x: out std_logic
    );
end my_xnor;

architecture behavior of my_xnor is
begin
    x <= '1' when a = '1' xor b = '0' else '1';
end behavior;
