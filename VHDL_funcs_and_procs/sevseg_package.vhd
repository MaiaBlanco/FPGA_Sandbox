library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- Functions can have multiple inputs and one return value.
-- Procedures have multiple 'return' values

PACKAGE MY IS
-- Function to convert into to 7 seg output.
-- This part is the 'protoype' similar to c/c++:
	FUNCTION INT_TO7SEG (A:INTEGER) return STD_LOGIC_VECTOR;
-- Procedure to select value of each hex display given A:
	PROCEDURE HEX_DEC (SIGNAL NUMBER:IN Integer; 
		SIGNAL DIGIT0, DIGIT1, DIGIT2, DIGIT3: OUT INTEGER RANGE 0 to 9);
END MY;

-- This part is the function definition:
package body MY IS
	function INT_TO7SEG (A:integer) return STD_LOGIC_VECTOR is
	VARIABLE RESULT: STD_LOGIC_VECTOR(6 downto 0);
	BEGIN
	CASE A IS
	-- NOTE:
	--   <=     Assignment of Signals
   --	  :=     Assignment of Variables and Signal Initialization
	-- https://www.nandland.com/vhdl/examples/example-assignment-operators.html
		WHEN 0 => RESULT:="1000000";
		WHEN 1 => RESULT:="1111001";
		WHEN 2 => RESULT:="0100100";
		WHEN 3 => RESULT:="0110000";
		WHEN 4 => RESULT:="0011001";
		WHEN 5 => RESULT:="0010010";
		WHEN 6 => RESULT:="0000010";
		WHEN 7 => RESULT:="1111000";
		WHEN 8 => RESULT:="0000000";
		WHEN 9 => RESULT:="0011000";
		WHEN OTHERS => RESULT:=(OTHERS=>'0');
	end case;
	
	return RESULT;

	END INT_TO7SEG;
	
	-- Define procedure behavior:
	PROCEDURE HEX_DEC (SIGNAL NUMBER:IN Integer; 
		SIGNAL DIGIT0, DIGIT1, DIGIT2, DIGIT3: OUT INTEGER RANGE 0 to 9) IS
	VARIABLE TEMP: INTEGER range 0 to 9999;
	VARIABLE D0: INTEGER range 0 to 9;
	VARIABLE D1: INTEGER range 0 to 9;
	VARIABLE D2: INTEGER range 0 to 9;
	VARIABLE D3: INTEGER range 0 to 9;
	BEGIN
		TEMP:=NUMBER;
		D3:=TEMP/1000;
		TEMP:=TEMP-(D3*1000);
		D2:=TEMP/100;
		TEMP:=TEMP-(D2*100);
		D1:=TEMP/10;
		TEMP:=TEMP-(D1*10);
		D0:=TEMP;
		DIGIT0<=D0;
		DIGIT1<=D1;
		DIGIT2<=D2;
		DIGIT3<=D3;
	END HEX_DEC;
end MY;


-- Procedures can have multiple inputs and do not return anything.

-- Procedure to convert int to 7 seg output: