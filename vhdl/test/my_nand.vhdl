library ieee;
use ieee.std_logic_1164.all;

entity my_nand is
    port(
        a: in std_logic;
        b: in std_logic;
        x: out std_logic
    );
end my_nand;

architecture behavior of my_nand is
begin
    x <= '1' when a = '0' or b = '0' else '0';
end behavior;
