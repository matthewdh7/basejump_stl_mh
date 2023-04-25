#Default goal for make is compilation to the executable 'Vbsg_cordic_sine_cosine_hyperbolic'.
#Use 'make run' to to run the executable and compute the error analysis.
#TRACE variable is used to enable tracing. While doing 'make run' give 
#variable value of TRACE=1 at command line;Use 'make run TRACE=1.
.ONESHELL: 
.PHONY: clean

FILE_DEL = $(VERI_DIR) CORDIC_tanh.vcd params_def.h bsg_tanh.v bsg_cordic_sine_cosine_hyperbolic.v

#Use 'make clean' to remove the trace and verilated files. Define FILE_DEL variable
#with files folder to verilated files if not using default 'obj_dir' directory name. 
#To have a different folder name for Verilated files, give the folder name to make 
#with variable VERI_DIR;Use 'make run VERI_DIR=your_desired_name'

GENERATED_VERILOG_FILE_TAN = bsg_tanh.v
GENERATED_VERILOG_FILE_SINCOS = bsg_cordic_sine_cosine_hyperbolic.v

#To generate the default design with the parameters at line #53, please use 
# 'make bsg_cordic_sine_cosine_hyperbolic.v'. 

SRC_FILES_TAN = $(GENERATED_VERILOG_FILE_TAN) 
SRC_FILES_SINCOS = $(GENERATED_VERILOG_FILE_SINCOS)

TEST_FILES_TAN = bsg_tanh_test2.cpp 
TEST_FILES_SINCOS = bsg_cordic_sine_cosine_hyperbolic_test.cpp

VERI_DIR = obj_dir

TRACE = 0
# need to add new flags to beginning of list, not end (after --Mdir comes the VERI_DIR path)
VFLAGS_TAN = --gdb -Wall --cc --exe --top-module bsg_tanh --Mdir
VFLAGS_SINCOS = -Wall --cc --exe --top-module bsg_cordic_sine_cosine_hyperbolic --Mdir 

VLINT_OFF = -Wno-UNUSED

.DEFAULT_GOAL := $(VERI_DIR)/Vbsg_tanh

#If installed verilator isn't included in your environment's default path,
#use VERILATOR_PATH to point to the installed 'verilator' executable.
#Use 'make run VERILATOR_PATH=where/verilator/is/installed/verilator-'version'/bin/verilator'

VERILATOR_PATH := $$HOME/verilator/install/bin/verilator

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
		python3 bsg_sine_cosine_hyperbolic_script.py 21 32 6 12 16 4 > $(GENERATED_VERILOG_FILE_SINCOS)

run: $(VERI_DIR)/Vbsg_tanh
	$(VERI_DIR)/Vbsg_tanh

Vbsg_tanh.mk: $(SRC_FILES_TAN) $(TEST_FILES_TAN)
ifeq ($(TRACE),1)
		$(VERILATOR_PATH)  $(VFLAGS_TAN) $(VERI_DIR) --trace $(SRC_FILES_TAN) $(TEST_FILES_TAN) $(VLINT_OFF)
else
		$(VERILATOR_PATH) $(VFLAGS_TAN) $(VERI_DIR) $(SRC_FILES_TAN) $(TEST_FILES_TAN) $(VLINT_OFF)
endif

$(VERI_DIR)/Vbsg_tanh: Vbsg_tanh.mk
		make -j -C $(VERI_DIR) -f Vbsg_tanh.mk Vbsg_tanh

$(GENERATED_VERILOG_FILE_TAN):
		echo -n > $(GENERATED_VERILOG_FILE_TAN)
		python3 bsg_tanh_script.py 21 32 6 12 16 4 > $(GENERATED_VERILOG_FILE_TAN)

clean:
		rm -rf $(FILE_DEL)

setup:
	cd $$HOME/verilator
	source /opt/rh/devtoolset-11/enable
	git checkout v5.002
	autoconf
	./configure --prefix=$$PWD/install
	make -j80
	make install

	export VERILATOR_ROOT=$$HOME/verilator
	export PATH=$$PATH:$$VERILATOR_ROOT/bin
# export VERILATOR_ROOT=$HOME/verilator
# export PATH=$PATH:$VERILATOR_ROOT/bin
# $HOME/verilator/install/bin/verilator -Wall --cc --exe bsg_tanh_test2.cpp --top-module bsg_tanh --Mdir obj_dir bsg_tanh.v   -Wno-UNUSED