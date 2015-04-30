#include "stimulus.h"
#include "adder.h"
#include "divider.h"
#include "response.h"

int sc_main(int argc, char *argv[])
{

	sc_signal< sc_uint<32> > sig1,s_sum;
	sc_signal< sc_uint<32> > sig2;
	sc_signal< sc_uint<1> > sig3,s_carry;
	sc_signal< sc_uint<1> > sig4,ss1,ss3,ss5,ss7,ss9,ss11,ss13,ss15;
	sc_signal< sc_uint<4> > sig6,sig7,sig8,sig9,sig10,sig11,sig12;
	sc_signal< sc_uint<4> > sig5,sig13,sig14,sig15,sig16,sig17,sig18,sig19,sig20,ss2,ss4,ss6,ss8,ss10,ss12,ss14,ss16;
	sc_clock clock("clock", 50);		// Clock


	stimulus s_stimulus("stimulus");
	// CONNECTIONS
	s_stimulus.clk(clock);
	s_stimulus.a(sig1);
	s_stimulus.b(sig2);
	s_stimulus.c(sig3);
	
	divider s_divider("divider");
	
	s_divider.input3(sig3);
	s_divider.input2(sig2);
	s_divider.input1(sig1);
	
	s_divider.output1(sig4);
	s_divider.output2(sig5);
	s_divider.output3(sig6);
	s_divider.output4(sig7);
	s_divider.output5(sig8);
	s_divider.output6(sig9);
	s_divider.output7(sig10);
	s_divider.output8(sig11);
	s_divider.output9(sig12);
	s_divider.output10(sig13);
	s_divider.output11(sig14);
	s_divider.output12(sig15);
	s_divider.output13(sig16);
	s_divider.output14(sig17);
	s_divider.output15(sig18);
	s_divider.output16(sig19);
	s_divider.output17(sig20);
	
	adder s_adder1("adder");
	
	s_adder1.input1(sig13);
	s_adder1.input2(sig5);
	s_adder1.input3(sig4);
	s_adder1.out1(ss2);
	s_adder1.out2(ss1);
	
	adder s_adder2("adder");
	s_adder2.input1(sig14);
	s_adder2.input2(sig6);
	s_adder2.input3(ss1);
	s_adder2.out1(ss4);
	s_adder2.out2(ss3);
	
	adder s_adder3("adder");
	s_adder3.input1(sig15);
	s_adder3.input2(sig7);
	s_adder3.input3(ss3);
	s_adder3.out1(ss6);
	s_adder3.out2(ss5);

	adder s_adder4("adder");
	s_adder4.input1(sig16);
	s_adder4.input2(sig8);
	s_adder4.input3(ss5);
	s_adder4.out1(ss8);
	s_adder4.out2(ss7);	
	
	adder s_adder5("adder");
	s_adder5.input1(sig17);
	s_adder5.input2(sig9);
	s_adder5.input3(ss7);
	s_adder5.out1(ss10);
	s_adder5.out2(ss9);
	
	adder s_adder6("adder");
	s_adder6.input1(sig18);
	s_adder6.input2(sig10);
	s_adder6.input3(ss9);
	s_adder6.out1(ss12);
	s_adder6.out2(ss11);
	
	adder s_adder7("adder");
	s_adder7.input1(sig19);
	s_adder7.input2(sig11);
	s_adder7.input3(ss11);
	s_adder7.out1(ss14);
	s_adder7.out2(ss13);
	
	adder s_adder8("adder");
	s_adder8.input1(sig20);
	s_adder8.input2(sig12);
	s_adder8.input3(ss13);
	s_adder8.out1(ss16);
	s_adder8.out2(ss15);
	
		
	
	response s_response("response");
	s_response.input1(ss2);
	s_response.input2(ss4);
	s_response.input3(ss6);
	s_response.input4(ss8);
	s_response.input5(ss10);
	s_response.input6(ss12);
	s_response.input7(ss14);
	s_response.input8(ss16);
	s_response.input9(ss15);
	
	s_response.out1(s_sum);
	s_response.out2(s_carry);
	
	//response.sum(bus_adder_sum_1);
	//response.carry(bus_adder_sum_2);

	// TRACING
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("32_it_adder(nand gate)");
	//tf->set_time_unit(1, SC_NS); 
	sc_trace(tf, clock, "clock");
	sc_trace(tf,sig1, "a");
	sc_trace(tf,sig2, "b");
	sc_trace(tf,sig3, "carry_in");
	sc_trace(tf,s_sum, "a+b");
	sc_trace(tf,s_carry, "carry_out");

	// SIMULATION
	int sim_time = 10000;
//	if (argc == 2)
//	sim_time = atoi(argv[1]);

	sc_start(sim_time, SC_NS);

	sc_close_vcd_trace_file(tf);

	return 0;
}
