library ieee;
use ieee.std_logic_1164.all;

entity my_not is
    port(
        a: in std_logic;
        x: out std_logic
    );
end my_not;

architecture behavior of my_not is
begin
    x <= '1' when a = '0' else '0';
end behavior;
