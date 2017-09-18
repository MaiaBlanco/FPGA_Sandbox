module testbench;

// Inputs to unit under test:
reg [4:0] read_addr;
reg clk;
reg reset;
reg write_enable;
reg [31:0] write_data;
reg [4:0] write_addr;

// Ouputs from unit under test:
wire [31:0] out_data;

// Internal representation
reg [5:0] i;			// Counter for for loop


// Unit under test:
register UUT(
	.ridx(read_addr), 
	.widx(write_addr), 
	.wdata(write_data), 
	.we(write_enable), 
	.clk(clk), 
	.reset(reset), 
	.rdata(out_data)
	);


initial begin
	$monitor("read_out = %d", out_data);

	for ( i = 0; i < 32; i = i + 1) begin
		#10 read_addr = i;
	end
	#10 write_addr = 0;
	write_data = 10;
	write_enable = 1;
	read_addr = 1;
	#10 write_addr = 1;
	write_data = 11;
	#5 write_enable = 0;
	#5 write_data = 240;
	write_enable = 1;
	#5 write_enable = 0;
	for ( i = 0; i < 32; i = i + 1) begin
		#10 read_addr = i;
	end
	#10 $finish;
end

initial	begin
	reset = 0;
	#6 clk = 0;
	forever begin
		#5 clk = ~clk;
	end
end

endmodule