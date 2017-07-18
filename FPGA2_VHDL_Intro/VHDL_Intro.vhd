-- Implementing XOR in VHDL

library IEEE;
USE IEEE.STD_LOGIC_1164.all;

entity VHDL_Intro is
	port
	(
		-- Input ports
		PB1, PB2	: in  STD_LOGIC;
		-- Output ports
		LED	: out STD_LOGIC
	);
end VHDL_Intro;



-- Library Clause(s) (optional)
-- Use Clause(s) (optional)

architecture behave of VHDL_Intro is

	-- Declarations (optional)

begin

	-- Process Statement (optional)

	-- Concurrent Procedure Call (optional)

	-- Concurrent Signal Assignment (optional)

	-- Conditional Signal Assignment (optional)

	-- Selected Signal Assignment (optional)

	-- Component Instantiation Statement (optional)

	-- Generate Statement (optional)
	LED <= ( NOT PB1 AND PB2 ) OR ( PB1 AND NOT PB2 );

end behave;
