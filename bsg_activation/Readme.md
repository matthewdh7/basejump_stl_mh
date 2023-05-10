# bsg_activation
This is a CORDIC based design to compute the hyperbolic tangent and sigmoid functions of an input angle. The design is based on previous contributions in the form of the hyperbolic sine and cosine module (Kunal Gulati) and iterative divider module.
`ang_i` is the input to the module and `data_o` is the output, where the output is either tanh or sigmoid depending on the value of the parameter `tanh_sel_i` (0: sigmoid, 1: tanh).

### Input and Output Representation
All the quantities are treated and represented as signed fixed-point numbers. If the `ang_width_p` is 16 and `precision` is 12 bits, then the input is represented as 0xI.DDD and the output is represented as a 13 bit number, with 12 decimal bits and 1 integer bit.
There are several internal different widths of internal signals, some used for the hyperbolic sine/cosine calculations. For more detail on these, see https://github.com/bespoke-silicon-group/basejump_stl/tree/master/experimental/bsg_cordic/bsg_cordic_sin_cos_hyperbolic.

### Module Parameters
#### ang_width_p: Width of input. Number of integer bits determined by subtracting the number of precision bits from this value.
#### precision: Number of decimal bits of input and output. Can be increased for higher accuracy, but should not be decreased below around 8. Past that, the performance of the hyperbolic sine/cosine module is hurt.
#### thresh_tanh_p: Threshold for tanh calculations to cut off at 1, expressed as a 7-bit value xxx.xxxx; tanh cannot surpass 1, and at some point, due to the precision of the CORDIC and divider calculations, the output will stagnate to 1. Setting this threshold allows
the bypassing of hyperbolic sine/cosine and division calculations.
#### thresh_sig_p: Threshold for sigmoid calculations, expressed as a 7-bit value xxx.xxxx; similar to `thresh_tanh_p`.
#### thresh_zero_p: Threshold below which output will bypass straight to 0, expressed as the bottom 6 bits of the decimal. This can be set to 0 for no bypass, and should also be adjusted according to the value of `precision`.

### Make Rules
Information on the make rules can be found in the comments, primarily at the top of the Makefile. If this is the first time making this module, the sequence should be `make setup` --> `make all`. If this is not the first time,
you can simple do `make run`. Note that devtoolset-11 needs to be enabled for this version of verilator (v5.002) to work: `source /opt/rh/devtoolset-11/enable`.

### Script Information
The file bsg_activation_test.cpp contains the testbench which is run during the make rule. If you want to change testing parameters, find the following lines:
#### 50, 51: Change the start and end quantities, expressed in decimal. You only need to change the actual number on the left of the multiplication sign, and the number will automatically be converted to the correct binary fixed-point representation by the equations.
#### 64: Change the number of samples tested in between the start and end quantities.
#### 109: Change `tanh_sel_i` to choose between testing sigmoid and tanh. Or, uncomment the line above for random testing.
Error calculations take place beyond line 143. Outputs are read and converted between 2s comp and decimal, and negated if needed, then compared with the c++ "theoretical" values for accuracy calculations.
