module fsm(x, y, clk, reset, state_out);

// Inputs:
input wire x, clk, reset;

// Outputs:
output wire y;
output wire [2:0] state_out;

// Internal representation (state):
reg [2:0] State;
reg [2:0] NextState;

// State Encoding Parameters: 
localparam 	STATE_Initial = 3'b000,
			STATE_1 = 3'b001,
		 	STATE_2 = 3'b010,
			STATE_3 = 3'b011,
			STATE_4 = 3'b100,
			STATE_5 = 3'b101,
			STATE_6 = 3'b110,
			STATE_7_UNUSED = 3'b111;

// Implement state updating (note non-blocking assignment operator)
always @(posedge clk) begin
	if (reset) State <= STATE_Initial;
	else State <= NextState;
end

// Now handle output (y) value
assign y = (State == STATE_5) | (State == STATE_6);
assign state_out = State;

// Implement the actual state transition based on the current state and the input value
// Note the use of blocking assignment here
always @(*) begin
	NextState = State;
	case (State) 
		STATE_Initial: begin
			if (x) NextState = STATE_1;
			else NextState = STATE_Initial;
		end
		STATE_1 : begin
			if (x) NextState = STATE_1;
			else NextState = STATE_2;
		end
		STATE_2 : begin
			if (x) NextState = STATE_3;
			else NextState = STATE_Initial;
		end
		STATE_3 : begin
			if (x) NextState = STATE_4;
			else NextState = STATE_2;
		end
		STATE_4 : begin
			if (x) NextState = STATE_5;
			else NextState = STATE_6;
		end
		STATE_5 : begin
			if (x) NextState = STATE_1;
			else NextState = STATE_2;
		end
		STATE_6 : begin
			if (x) NextState = STATE_3;
			else NextState = STATE_Initial;
		end
		STATE_7_UNUSED : begin
			NextState = STATE_Initial;
		end
	endcase
end

endmodule