library ieee;
use ieee.std_logic_1164.all;

entity my_xor is
    port(
        a: in std_logic;
        b: in std_logic;
        x: out std_logic
    );
end my_xor;

architecture behavior of my_xor is
begin
    x <= '1' when a = '1' xor b = '1' else '0';
end behavior;
