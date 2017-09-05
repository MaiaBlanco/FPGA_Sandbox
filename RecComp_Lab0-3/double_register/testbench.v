module testbench;

// Inputs to unit under test:
reg [4:0] read_addrA;
reg [4:0] read_addrB;
reg clk;
reg reset;
reg write_enableA;
reg write_enableB;
reg [31:0] write_dataA;
reg [31:0] write_dataB;
reg [4:0] write_addrA;
reg [4:0] write_addrB;

// Ouputs from unit under test:
wire [31:0] out_dataA;
wire [31:0] out_dataB;

// Internal representation
reg [5:0] i;			// Counter for for loop


// Unit under test:
register UUT(
	.ridxA(read_addrA), 
	.widxA(write_addrA), 
	.wdataA(write_dataA), 
	.weA(write_enableA), 
	.ridxB(read_addrB), 
	.widxB(write_addrB), 
	.wdataB(write_dataB), 
	.weB(write_enableB), 
	.clk(clk), 
	.reset(reset), 
	.rdataA(out_dataA),
	.rdataB(out_dataB)
	);


initial begin
	$monitor("read_out_A = %d read_out_B = %d", out_dataA, out_dataB);

	// Just read out all of the register entries through both output ports:
	for ( i = 0; i < 32; i = i + 1) begin
		#10 
		read_addrA = i;
		read_addrB = 31-i;
	end

	// Write to two different register entries at the same time:
	// (port A writing to reg 0, port B writing '22' to reg 24)
	#10 	
	read_addrA = 0;
	write_addrA = 0;
	write_dataA = 10;
	write_enableA = 1;
	read_addrB = 24;
	write_addrB = 24;
	write_dataB = 22;
	write_enableB = 1;
	#10
	write_enableA = 0;
	write_enableB = 0;

	// Switch roles: now port B writes to 0 and port A writes '183' to reg 30 
	#10 
	read_addrA = 30;
	write_addrA = 30;
	write_dataA = 183;
	read_addrB = 0;
	write_addrB = 0;
	write_enableA = 1;
	write_enableB = 1;
	#10
	write_enableA = 0;
	write_enableB = 0;

	// Now assign '10' and '11' to register 10 from ports A and B respectively
	#10
	read_addrA = 10;
	read_addrB = 10;
	write_addrA = 10;
	write_addrB = 10;
	write_dataA = 10;
	write_dataB = 11;
	write_enableA = 1;
	write_enableB = 1;
	// Only disabling B should allow A to write:
	#10
	write_enableB = 0;
	#10 
	write_enableA = 0;



	// Now check all of the values
	for ( i = 0; i < 32; i = i + 1) begin
		#10 
		read_addrA = i;
		read_addrB = 31-i;
	end

	// Test resetting
	#10 reset = 1;
	#10 reset = 0;

	// Verify the values one more time
	for ( i = 0; i < 32; i = i + 1) begin
		#10 
		read_addrA = i;
		read_addrB = i;
	end
	#10 $finish;
end

// Generate a clock
initial	begin
	reset = 0;
	#6 clk = 0;
	forever begin
		#5 clk = ~clk;
	end
end

endmodule