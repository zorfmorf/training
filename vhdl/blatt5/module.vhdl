library ieee;
use ieee.std_logic_1164.all;

entity module is 
    port(
        a : in std_logic;
        b : in std_logic;
        w : out std_logic;
        x : out std_logic;
        y : out std_logic;
        z : out std_logic
    );
end module;

architecture behavior of module is
begin
    w <= transport a or b;
    x <= transport a or b after 10 ns;
    y <= a or b after 10 ns;
    z <= reject 6 ns inertial a or b after 10 ns;
end behavior;
