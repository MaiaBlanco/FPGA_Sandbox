// Derp derp, here's a verilog file with a module called VHDL!
module VHDL_Intro ( PB1, PB2, LED );
	input PB1, PB2;
	output LED;

	assign LED = ( ! PB1 & PB2 ) | ( ! PB2 & PB1 );
	
endmodule