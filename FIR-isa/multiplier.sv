module multiplier #(parameter WIDTH = 8) (
    input [WIDTH-1:0] a,
    input [WIDTH-1:0] b,
    output [WIDTH-1:0] product
);

    logic [2*WIDTH-1:0] product_temp;

    assign product_temp = a * b;
    // keep the first 7 bits after the decimal point
    assign product = product_temp[2*WIDTH-1-1 : 2*WIDTH-1-1-7];

endmodule
