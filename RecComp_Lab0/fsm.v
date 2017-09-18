module fsm(x,y, counter);

// Inputs:
input wire x;

// Outputs:
output wire y;
inout [2:0] counter;

reg [2:0] counter;
reg [2:0] new_state;

assign y = counter[0] & ~counter[2];

always @ (x) begin
	new_state[0] = ~counter[2]&~x&counter[1] | ~counter[0]&counter[1]&counter[2]&x;
	new_state[1] = counter[0]&~counter[2]&~x | counter[1]&~counter[2]&x | ~counter[0]&counter[2]&x;
	new_state[2] = ~counter[2]&x | ~counter[1]&counter[2]&x;
	counter = new_state;
end

endmodule
