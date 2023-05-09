#Default goal for make is compilation to the executable 'Vbsg_activation'.
#Use 'make run' to to run the executable and compute the error analysis.
#TRACE variable is used to enable tracing. While doing 'make run' give 
#variable value of TRACE=1 at command line;Use 'make run TRACE=1.
.ONESHELL: 
.PHONY: clean

# parameters set here for both sincos and top level:
angbitlen = 16
ansbitlen = 32
negprec = 6
posprec = 8
precision = 10
startquantpow = 4

FILE_DEL = $(VERI_DIR) CORDIC_sinh_cosh.vcd CORDIC_activation.vcd params_def.h bsg_activation.v bsg_cordic_sine_cosine_hyperbolic.v bsg_activation_OLD.v

#Use 'make clean' to remove the trace and verilated files. Define FILE_DEL variable
#with files folder to verilated files if not using default 'obj_dir' directory name. 
#To have a different folder name for Verilated files, give the folder name to make 
#with variable VERI_DIR;Use 'make run VERI_DIR=your_desired_name'

GENERATED_VERILOG_FILE_ACT = bsg_activation.v
GENERATED_VERILOG_FILE_SINCOS = bsg_cordic_sine_cosine_hyperbolic.v

SRC_FILES_ACT = $(GENERATED_VERILOG_FILE_ACT) 
SRC_FILES_SINCOS = $(GENERATED_VERILOG_FILE_SINCOS)

TEST_FILES_ACT = bsg_activation_test.cpp 
TEST_FILES_SINCOS = bsg_cordic_sine_cosine_hyperbolic_test.cpp

VERI_DIR = obj_dir

TRACE = 0
# need to add new flags to beginning of list, not end (after --Mdir comes the VERI_DIR path)
VFLAGS_ACT = -Wall --cc --exe --top-module bsg_activation --Mdir
VFLAGS_SINCOS = -Wall --cc --exe --Mdir 

VLINT_OFF = -Wno-UNUSED

.DEFAULT_GOAL := $(VERI_DIR)/Vbsg_activation

#If installed verilator isn't included in your environment's default path,
#use VERILATOR_PATH to point to the installed 'verilator' executable.
#Use 'make run VERILATOR_PATH=where/verilator/is/installed/verilator-'version'/bin/verilator'

VERILATOR_PATH := verilator

run: $(VERI_DIR)/Vbsg_activation
	$(VERI_DIR)/Vbsg_activation

Vbsg_activation.mk: $(SRC_FILES_ACT) $(TEST_FILES_ACT)
ifeq ($(TRACE),1)
		$(VERILATOR_PATH)  $(VFLAGS_ACT) $(VERI_DIR) --trace $(SRC_FILES_ACT) $(TEST_FILES_ACT) $(VLINT_OFF)
else
		$(VERILATOR_PATH) $(VFLAGS_ACT) $(VERI_DIR) $(SRC_FILES_ACT) $(TEST_FILES_ACT) $(VLINT_OFF)
endif

$(VERI_DIR)/Vbsg_activation: Vbsg_activation.mk
		make -j -C $(VERI_DIR) -f Vbsg_activation.mk Vbsg_activation
# parameter format in this makefile: angbitlen, ansbitlen, negprec, posprec, precision, startquantpow (unused now)
$(GENERATED_VERILOG_FILE_ACT):
		echo -n > $(GENERATED_VERILOG_FILE_ACT)
		python3 bsg_activation_script.py $(angbitlen) $(ansbitlen) $(negprec) $(posprec) $(precision) $(startquantpow) > $(GENERATED_VERILOG_FILE_ACT)

clean:
		rm -rf $(FILE_DEL)

setup:
	cd $$HOME/verilator
	git -C $$HOME/verilator checkout v5.002
	autoconf
	./configure
	make -j80
	make install

	cd $$HOME/basejump_stl_mh/bsg_activation
	$(MAKE) $(VERI_DIR)/Vbsg_cordic_sine_cosine_hyperbolic

	export VERILATOR_ROOT=$$HOME/verilator
	export PATH=$$PATH:$$VERILATOR_ROOT/bin

# generating sin_cos_hyperbolic .v file is included in setup, 
# but use this command to run the simulation for sin/cos independently
sincos: $(VERI_DIR)/Vbsg_cordic_sine_cosine_hyperbolic
	$(VERI_DIR)/Vbsg_cordic_sine_cosine_hyperbolic

Vbsg_cordic_sine_cosine_hyperbolic.mk: $(SRC_FILES_SINCOS) $(TEST_FILES_SINCOS)
ifeq ($(TRACE),1)
		$(VERILATOR_PATH)  $(VFLAGS_SINCOS) $(VERI_DIR) --trace $(SRC_FILES_SINCOS) $(TEST_FILES_SINCOS) $(VLINT_OFF)
else
		$(VERILATOR_PATH) $(VFLAGS_SINCOS) $(VERI_DIR) $(SRC_FILES_SINCOS) $(TEST_FILES_SINCOS) $(VLINT_OFF)
endif

$(VERI_DIR)/Vbsg_cordic_sine_cosine_hyperbolic: Vbsg_cordic_sine_cosine_hyperbolic.mk
		make -j -C $(VERI_DIR) -f Vbsg_cordic_sine_cosine_hyperbolic.mk Vbsg_cordic_sine_cosine_hyperbolic

$(GENERATED_VERILOG_FILE_SINCOS):
		echo -n > $(GENERATED_VERILOG_FILE_SINCOS)
		python3 bsg_sine_cosine_hyperbolic_script.py $(angbitlen) $(ansbitlen) $(negprec) $(posprec) $(precision) $(startquantpow) > $(GENERATED_VERILOG_FILE_SINCOS)

# random garbage testing stuff
# source /opt/rh/devtoolset-11/enable
# export VERILATOR_ROOT=$HOME/verilator
# export PATH=$PATH:$VERILATOR_ROOT/bin
# ./configure --prefix=$$PWD/install