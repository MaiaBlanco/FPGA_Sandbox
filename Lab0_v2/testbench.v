module testbench;

// Inputs
reg X, Clock, Reset;
// Outputs
wire Y;
wire [2:0] out_state;

// Instance of unit under test
fsm UUT(.x(X), .y(Y), .clk(Clock), .reset(Reset), .state_out(out_state));

initial begin
	X = 0;
	Clock = 0;
	Reset = 1;
	Clock = 1;
	#10 Reset = 0;
	#10 Clock = 0;
	forever begin
		#5 Clock = ~Clock;
	end
end

initial begin
	$monitor("x=%b, y=%b, state_out=%3b", X, Y, out_state);
	#40 X = 1;
	#10 X = 0;
	#10 X = 1;
	#10 X = 0;
	#10 X = 1;
	#10 X = 1;
	#10 X = 0;
	#10 X = 1;
	#10 X = 0;
	#10 X = 0;
	#10 X = 1;
	#10 X = 0;
	#10 X = 1;
	#10 X = 1;
	#10 X = 0;
	#10 X = 1;
	#10 X = 1;
	#10 X = 1;
	#10 X = 1;
	#10 X = 1;
	#10 X = 1;
	$finish;
end

endmodule