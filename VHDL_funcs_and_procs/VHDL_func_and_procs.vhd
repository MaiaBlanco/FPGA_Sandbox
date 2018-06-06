-- Based on tutorial here: 
-- https://www.youtube.com/watch?v=j2lAPIjpF1w&t=309s


library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
library sevseg_package;
use sevseg_package.my.all;

ENTITY SEVSEG is
PORT(
SW: IN STD_LOGIC_VECTOR(9 downto 0);
HEX0: OUT STD_LOGIC_VECTOR(6 downto 0);
HEX1: OUT STD_LOGIC_VECTOR(6 downto 0);
HEX2: OUT STD_LOGIC_VECTOR(6 downto 0);
HEX3: OUT STD_LOGIC_VECTOR(6 downto 0);
KEY: in STD_LOGIC_VECTOR(3 downto 0);
CLOCK_50: IN STD_LOGIC
);
END SEVSEG;


ARCHITECTURE MAIN of SEVSEG IS
SIGNAL NUMBER: INTEGER RANGE 0 to 9999:=0;
SIGNAL PRESCALER: INTEGER RANGE 0 to 50000000:=0;
SIGNAL SEG0, SEG1, SEG2, SEG3: INTEGER range 0 to 9:=0;
BEGIN

-- Call package procedure to assign values to each 7seg display.
HEX_DEC(NUMBER, SEG0, SEG1, SEG2, SEG3);
-- Call function to update each hex display.
HEX0<=INT_TO7SEG(SEG0);
HEX1<=INT_TO7SEG(SEG1);
HEX2<=INT_TO7SEG(SEG2);
HEX3<=INT_TO7SEG(SEG3);

-- Define clock-driven process:
PROCESS(CLOCK_50)
BEGIN
IF(CLOCK_50'EVENT and CLOCK_50='1') THEN
	IF(PRESCALER<100000*to_integer(unsigned(SW))) THEN
		PRESCALER<=PRESCALER+1;
	ELSE
		PRESCALER<=0;
	end if;
	IF(PRESCALER=0)THEN
		IF(KEY(0)='1')THEN
			IF(NUMBER<9999)THEN
				NUMBER<=NUMBER+1;
			ELSE
				NUMBER<=9999;
			END IF;
		ELSE
			IF(NUMBER>0) THEN
				NUMBER<=NUMBER-1;
			ELSE
				NUMBER<=0;
			END IF;
		END IF;
-- Does lack of else here cause a latch situation?
	END IF;
END IF;
END PROCESS;

END MAIN;