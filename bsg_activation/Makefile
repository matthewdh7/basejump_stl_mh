# ***IMPORTANT*** For verilator to work, must enable devtools-11 using cmd below
# source /opt/rh/devtoolset-11/enable

# Rules:
# make setup : only need to do once after installing verilator locally
# make run : runs only bsg_activation_test.cpp, assumes sinh/cosh module is already setup
#	make run TRACE=1 : additionally generates .vcd file from testbench to view waveform
# make all: generates cordic (sinh/cosh) module and activation module, runs bsg_activation_test.cpp
# make clean : cleans output files and generated verilog files (including bsg_activation.v)
# make sincos : generates and runs only the cordic module and testbench


.ONESHELL: 
.PHONY: clean
.DEFAULT_GOAL := $(VERI_DIR_ACT)/Vbsg_activation

# Set parameters. Posprec and precision can be adjusted for balance between error and area.
# Posprec and precision should not be set below around 8, 10 to maintain accuracy of calculations.
# Angbitlen should be increased with precision, to ensure enough integer bits (precision determines
# decimal bits). Ansbitlen and negprec should be left as is, otherwise cordic module will not function well.
angbitlen = 16
ansbitlen = 32
negprec = 6
posprec = 8
precision = 10

# Use 'make clean' to remove the trace and verilated files. Define FILE_DEL variable
# with files folder to verilated files if not using default directory name. 
# To have a different folder name for Verilated files, give the folder name to make 
# with variable VERI_DIR: 'make run VERI_DIR=your_desired_name'
FILE_DEL = $(VERI_DIR_SINCOS) $(VERI_DIR_ACT) CORDIC_sinh_cosh.vcd CORDIC_activation.vcd params_def.h bsg_activation.v bsg_cordic_sine_cosine_hyperbolic.v bsg_activation_OLD.v
VERI_DIR_SINCOS = obj_dir_sincos
VERI_DIR_ACT = obj_dir_act

# Set output file names and output folder.
GENERATED_VERILOG_FILE_ACT = bsg_activation.v
GENERATED_VERILOG_FILE_SINCOS = bsg_cordic_sine_cosine_hyperbolic.v

SRC_FILES_ACT = $(GENERATED_VERILOG_FILE_ACT) 
SRC_FILES_SINCOS = $(GENERATED_VERILOG_FILE_SINCOS)

TEST_FILES_ACT = bsg_activation_test.cpp 
TEST_FILES_SINCOS = bsg_cordic_sine_cosine_hyperbolic_test.cpp

# Default
TRACE = 0

# Add new flags to beginning of list, not end (the VERI_DIR path comes after --Mdir)
VFLAGS_ACT = -Wall --cc --exe --top-module bsg_activation --Mdir
VFLAGS_SINCOS = -Wall --cc --exe --Mdir 

VLINT_OFF = -Wno-UNUSED

# If installed verilator isn't included in your environment's default path,
# use VERILATOR_PATH to point to the installed 'verilator' executable.
# Use 'make run VERILATOR_PATH=where/verilator/is/installed/verilator-'version'/bin/verilator'
VERILATOR_PATH := verilator

setup:
	cd $$HOME/verilator
	git -C $$HOME/verilator checkout v5.002
	autoconf
	./configure
	make -j80
	make install

all: $(VERI_DIR_SINCOS)/Vbsg_cordic_sine_cosine_hyperbolic
	$(MAKE) $(VERI_DIR_ACT)/Vbsg_activation
	$(VERI_DIR_ACT)/Vbsg_activation

run: $(VERI_DIR_ACT)/Vbsg_activation
	$(VERI_DIR_ACT)/Vbsg_activation


Vbsg_activation.mk: $(SRC_FILES_ACT) $(TEST_FILES_ACT)
ifeq ($(TRACE),1)
		$(VERILATOR_PATH)  $(VFLAGS_ACT) $(VERI_DIR_ACT) --trace $(SRC_FILES_ACT) $(TEST_FILES_ACT) $(VLINT_OFF)
else
		$(VERILATOR_PATH) $(VFLAGS_ACT) $(VERI_DIR_ACT) $(SRC_FILES_ACT) $(TEST_FILES_ACT) $(VLINT_OFF)
endif

$(VERI_DIR_ACT)/Vbsg_activation: Vbsg_activation.mk
		make -j -C $(VERI_DIR_ACT) -f Vbsg_activation.mk Vbsg_activation

$(GENERATED_VERILOG_FILE_ACT):
		echo -n > $(GENERATED_VERILOG_FILE_ACT)
		python3 bsg_activation_script.py $(angbitlen) $(ansbitlen) $(negprec) $(posprec) $(precision) > $(GENERATED_VERILOG_FILE_ACT)

clean:
		rm -rf $(FILE_DEL)


# Generating cordic file is included in setup and run, 
# but use this command to run the simulation for sin/cos independently.
sincos: $(VERI_DIR_SINCOS)/Vbsg_cordic_sine_cosine_hyperbolic
	$(VERI_DIR_SINCOS)/Vbsg_cordic_sine_cosine_hyperbolic

Vbsg_cordic_sine_cosine_hyperbolic.mk: $(SRC_FILES_SINCOS) $(TEST_FILES_SINCOS)
ifeq ($(TRACE),1)
		$(VERILATOR_PATH)  $(VFLAGS_SINCOS) $(VERI_DIR_SINCOS) --trace $(SRC_FILES_SINCOS) $(TEST_FILES_SINCOS) $(VLINT_OFF)
else
		$(VERILATOR_PATH) $(VFLAGS_SINCOS) $(VERI_DIR_SINCOS) $(SRC_FILES_SINCOS) $(TEST_FILES_SINCOS) $(VLINT_OFF)
endif

$(VERI_DIR_SINCOS)/Vbsg_cordic_sine_cosine_hyperbolic: Vbsg_cordic_sine_cosine_hyperbolic.mk
		make -j -C $(VERI_DIR_SINCOS) -f Vbsg_cordic_sine_cosine_hyperbolic.mk Vbsg_cordic_sine_cosine_hyperbolic

$(GENERATED_VERILOG_FILE_SINCOS):
		echo -n > $(GENERATED_VERILOG_FILE_SINCOS)
		python3 bsg_sine_cosine_hyperbolic_script.py $(angbitlen) $(ansbitlen) $(negprec) $(posprec) $(precision) > $(GENERATED_VERILOG_FILE_SINCOS)

# Testing stuff, unused
# source /opt/rh/devtoolset-11/enable
# export VERILATOR_ROOT=$HOME/verilator
# export PATH=$PATH:$VERILATOR_ROOT/bin
# ./configure --prefix=$$PWD/install