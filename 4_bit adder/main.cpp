#include "systemc.h"
#include "response.h"
#include "stimulus.h"
#include "adder.h"

int sc_main(int argc, char* argv[])
{sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated", sc_core::SC_DO_NOTHING );
	//Signals In the adder
	sc_signal< sc_bv <4> > A;   //Input Var 1(4 Bit)
	sc_signal< sc_bv <4> > B;   //Input var 2 (4 Bit)
	sc_signal< sc_bv <1> > Cin; //Carry Input (1 Bit)
	sc_signal< sc_bv <4> > Sum; //Sum (4 bit)
	sc_signal< sc_bv<1> > Cout; //carry out(1 Bit)
	sc_clock	clk("clock", 20); // clock signal with 2 nano sec 
	char stdbuf[256];
 	//initialize the instances of each component

	ADD adder("adder");
	stimulus stim("stim");
	response resp("resp");

       //now give the connections

	stim.clock(clk);
	stim.data_1(A);
	stim.data_2(B);
	stim.data_3(Cin);
	adder.a(A);
	adder.b(B);
	adder.ci(Cin);
	adder.sum(Sum);
	adder.co(Cout);
	resp.sum(Sum);
	resp.carry(Cout);
       

        sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("adder");
        tf->set_time_unit(1, SC_NS);
	sc_trace(tf, clk, "clock");
	//for ( int i = 0; i < 8; i++ ) {
		sprintf(stdbuf, "bus_stimulus_1()");
		sc_trace(tf, A, stdbuf );
		sprintf(stdbuf, "bus_stimulus_2");
		sc_trace(tf, B, stdbuf );
		sprintf(stdbuf, "bus_adder_sum");
		sc_trace(tf, Sum, stdbuf );
	//}
	sc_trace(tf, Cout, "bus_adder_carry");



       int sim_time = 1000;
	if (argc == 2)
		sim_time = atoi(argv[1]);

	sc_start(sim_time, SC_NS);

	sc_close_vcd_trace_file(tf);
	return 0;
}		
		
