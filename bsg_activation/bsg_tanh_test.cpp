#include "Vbsg_tanh.h"
#include "verilated.h"
#include <iostream>
#include <math.h>
#include "params_def.h" 
#include <sstream>
#include <cstdlib>

#if VM_TRACE			
#include <verilated_vcd_c.h> 
#endif

vluint64_t main_time = 0;
double sc_time_stamp(){
	return main_time;
}

double theta_max_compute(int negprec, int posiprec)
{	

// This function computes the maximum theta(angle) that can be
// computed by the negprec+posprec number of hyperbolic iterations. In this
// particular module this theta translates to the half of the maximum
// attainable natural logarithm value.

	double theta =atanh(pow(2,-posiprec));		   
												   
	for(int i=-negprec;i<=posiprec;i++)				
	{
		if(i<=0)
			theta+=atanh(1-pow(2,i-2));
		else
			theta+=atanh(pow(2,-i));
	}
	return theta;
}



double theta_final = theta_max_compute(negprec, posiprec);

double maxquant = theta_final*pow(2,precision); 
//double maxquant = 450000;

// The maximum quantity is determined by the angle that can be accumulated
// by the negative and positive iterations. Please refer to the table mentioned
// in the readme for the maximum angle accumulated by a particular number of
// iterations.
									  
unsigned long int startquant = 10000;
unsigned long int currquant = startquant;

// The starting quantity is a very important parameter of testing. Due to truncation effect
// the sense of magnitude of smaller numbers is lost and results in high error. The starting quantity can be
// 2^(negprec+posprec+1) so that the sense of magnitude is not lost throughout the iterations and 
// this gives very accurate results. The fixed point representation should also be carefully selected.
// There will be very high error in smaller numbers due to the above explained truncation
// error. This can easily be shifted to an error range of 0.1-1% or better by
// using some careful fixed point respresentation and it is highly advised to retain
// at least 8-12 bits for decimal point to get above rated results.

// unsigned long int numsamples = (pow(2,anglen-1)-1);
unsigned long int numsamples = 100;

// While testing please be very careful of the number of samples. Sometimes the
// anglen can make the sample_width = 0 which will definitely result in unnecessary
// high errors. If the test fails, the first thing to check is `sample_width`.

unsigned long int sample_width = round((maxquant-startquant)/numsamples);
																																	
unsigned long int *samples;													

unsigned long int *result;

unsigned int *tanh_sel;

int main(int argc, char **argv, char **env)
{
	Verilated::commandArgs(argc, argv);
	Vbsg_tanh* top = new Vbsg_tanh;

	#if VM_TRACE
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	#endif

	int samp_len = 0;
	samples = new unsigned long int [numsamples];
	result = new unsigned long int [numsamples];
	tanh_sel = new unsigned int [numsamples];
	int ready_in = 1;
	top->neg_sel_i = 0;

	#if VM_TRACE
	top->trace (tfp, 99);
	tfp->open ("CORDIC_tanh.vcd");
	#endif

	for(int i=0;i<numsamples;i++){
		for(int j=0; j<100; j++) {
			if (top->val_o) {
				result[i] = top->data_o;
			}
			if(j==1) {
				top->ang_i = currquant;
				samples[i] = currquant;
				currquant += sample_width;
				samp_len++;

				top->tanh_sel_i = rand() % 2;
				tanh_sel[i] = top->tanh_sel_i;
				
				top->val_i = 1;
				top->ready_i = ready_in;

				int val_i = top->val_i;
				int val_o = top->val_o;
				int ready_i = top->ready_i;
				int ready_o = top->ready_o;
			} else {
				top->val_i = 0;
			}
			for (int i=0; i<10; i++) {

				#if VM_TRACE
				tfp->dump (main_time);
				#endif

				if((main_time%10)==0){			
					top->clk_i = 1;
					}			
				
				if((main_time%10)==5){
					top->clk_i = 0;
				}
				top->eval();
				main_time++;
			}
		}
	}	

	std::cout<<std::endl;

	float maxerr_sig = 0;
    float maxerr_tanh = 0;
	float avgerr_sig;
	float avgerr_tanh;

    double max_err_samp_tanh;
	double max_err_samp_sig;

	for(int i=0;i<samp_len;i++){
		float samp = samples[i]/pow(2,precision);
		double obser_value = result[i]/pow(2,precision);

		double ideal_value_tanh = tanh(samp);
		double ideal_value_sig = 1.0 / (1.0 + exp(-samp));

		float err_tanh = 0;
		float err_sig = 0;
		if (tanh_sel[i]) {
			err_tanh = (ideal_value_tanh - obser_value)/ideal_value_tanh;
			avgerr_tanh += err_tanh;
			if(maxerr_tanh<fabs(err_tanh)) {
			maxerr_tanh = err_tanh;
			max_err_samp_tanh = samp;
			}
		} else {
			err_sig = (ideal_value_sig - obser_value)/ideal_value_sig;
			avgerr_sig += err_sig;
			if(maxerr_sig<fabs(err_sig)) {
			maxerr_sig = err_sig;
			max_err_samp_sig = samp;
			}
		}

		//print test case information each iteration
		std::cout<<std::endl;
		std::cout<<"Input "<<i+1<<" tested for "<<(tanh_sel[i] ? "tanh" : "sigmoid")<<": "<<samp<<std::endl;
		std::cout<<"Output expected:"<<(tanh_sel[i] ? ideal_value_tanh : ideal_value_sig)<<std::endl;
		std::cout<<"Output received:"<<obser_value<<std::endl;
		std::cout<<"Error:"<<(tanh_sel[i] ? err_tanh : err_sig) * 100<<"%"<<std::endl;

		// std::cout<<std::endl;
		// std::cout<<"Input "<<i+1<<" tested for "<<"tanh"<<":"<<samp<<std::endl;
		// std::cout<<"Output expected:"<<ideal_value_sig<<std::endl;
		// std::cout<<"Output received:"<<obser_value<<std::endl;
		// std::cout<<"Error:"<<err_sig * 100<<"%"<<std::endl;
	}

	avgerr_tanh /= numsamples;
	avgerr_sig /= numsamples;

	std::cout<<std::endl;
	std::cout<<std::endl;
	
	//print overall results
	std::cout<<"Range of input tested: "<<startquant/pow(2, precision)<<" to "<<maxquant/pow(2,precision);
	std::cout<<" with a spacing of "<<sample_width/pow(2, precision)<<std::endl;
	std::cout<<"Average errors: "<<avgerr_tanh<<"% [tanh], "<<avgerr_sig<<"% [sigmoid]"<<std::endl;
	//std::cout<<"Average errors: "<<avgerr_sig<<"%"<<std::endl;

	#if VM_TRACE
	tfp->close();
	#endif

	delete top;
	exit(0);
}
	
