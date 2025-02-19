

module adder #(parameter WIDTH = 8) (
    input [WIDTH-1:0] a,
    input [WIDTH-1:0] b,
    output [WIDTH:0] sum
);

    logic [WIDTH:0] sum_temp;

    assign sum_temp = a + b;
    assign sum = sum_temp[WIDTH-1:0];

endmodule
