

module fir 
#(
    parameter WIDTH = 8, 
    parameter COEFF_NUMB = 11, 
    parameter COEFFICIENTS = {8'h01, 8'h02, 8'h03, 8'h04, 8'h05, 8'h06, 8'h07, 8'h08, 8'h09, 8'h0A, 8'h0B}
) 

(
    input clk,
    input reset_n,
    input [WIDTH-1:0] data_in,
    input valid_in,
    output reg valid_out,
    output reg [WIDTH-1:0] data_out
);


logic [WIDTH-1:0] data_out_adder;
logic [WIDTH-1:0] data_out_multiplier;


adder #(.WIDTH(WIDTH)) adder_inst (
    .a(data_in),
    .b(data_in),
    .sum(data_out_adder)
);

register #(.WIDTH(WIDTH)) register_inst (
    .clk(clk),
    .reset_n(reset_n),
    .data_in(data_in),
    .data_out(data_out)
);

multiplier #(.WIDTH(WIDTH)) multiplier_inst[COEFF_NUMB-1:0] (
    .a(data_in),
    .b(data_in),
    .product(data_out_multiplier)
);

always_ff @(posedge clk or negedge reset_n) begin
    if (~reset_n) begin
        valid_out <= 0;
    end else begin
        valid_out <= valid_in;
    end
end

// process to count to 100 clock cycles before finishing the simulation
integer count = 0;
always_ff @(posedge clk or negedge reset_n) begin
    if (~reset_n) begin
        count <= 0;
    end else begin
        if (count < 100) begin
            count <= count + 1;
        end else begin
            $finish;
        end
    end
end

endmodule


