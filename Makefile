VERILATOR = verilator 
VERILATOR_COVERAGE = verilator_coverage

MODULE_NAME = our

VERILATOR_FLAGS =
# to generate the c++ in exe form
VERILATOR_FLAGS += --cc --exe -Wall

# make waveforms
VERILATOR_FLAGS += --trace

# enable assertions
VERILATOR_FLAGS += --assert

# generate coverage analysis
VERILATOR_FLAGS += --coverage

# run make to compile the model, as many cores as possible
VERILATOR_FLAGS += --build -j

# run in debug mode
# VERILATOR_FLAGS += --debug

# input files 
VERILATOR_SV_INPUT = $(MODULE_NAME).sv 
VERILATOR_CPP_INPUT = sim_main.cpp

VERILATOR_FILES =  $(VERILATOR_SV_INPUT) $(VERILATOR_CPP_INPUT)

# create the annotated source
VERILATOR_COV_FLAGS += --annotate logs/annotated
# min number of coverage hits
VERILATOR_COV_FLAGS += --annotate-min 1
# create the coverage report
VERILATOR_COV_FLAGS += -write-info logs/coverage.info
# input file from Verilator
VERILATOR_COV_FLAGS += logs/coverage.dat

default : run 

run:
	@echo "Verilate"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_FILES)
	@echo "Run"
	@rm -rf logs
	@mkdir -p logs 
	obj_dir/V$(MODULE_NAME)

coverage: run
	@echo "Coverage"
	@rm -rf logs/annotated
	
	$(VERILATOR_COVERAGE) $(VERILATOR_COV_FLAGS)