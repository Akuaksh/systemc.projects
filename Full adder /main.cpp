#include "systemc.h"
#include "response.h"
#include "stimulus.h"
#include "adder.h"

int sc_main(int argc, char* argv[])
{sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated", sc_core::SC_DO_NOTHING );
        //Signals In the adder
        sc_signal< sc_bv <1> > A;   //Input Var 1(1 Bit)
        sc_signal< sc_bv <1> > B;
	sc_signal< sc_bv <1> >Cin; 
        sc_signal< sc_bv <1> > S;
	sc_signal< sc_bv <1> > C;
	sc_signal< sc_bv <1> > C1;
	sc_signal< sc_bv <1> > S1;
	 sc_signal< sc_bv <1> > C2;
         sc_clock        clk("clock", 60); // clock signal with 20 nano sec
        char stdbuf[256];
        H_ADD adder1("adder");
	H_ADD adder2("adder");
	STIMULUS stim("stim"); 
        response resp("resp"); 

       stim.clk(clk);
       stim.a(A);
       stim.b(B);
	stim.c(Cin);
       adder1.a(A);
       adder1.b(B);
       adder1.s(S);
       adder1.c(C);
       adder2.a(S);
       adder2.b(Cin);
       adder2.s(S1);
       adder2.c(C1);
       resp.sum(C1);
       resp.carry(C);
       resp.c(C2);       
       sc_trace_file *tf;
        tf = sc_create_vcd_trace_file("full_adder");
        tf->set_time_unit(1, SC_NS);
        sc_trace(tf, clk, "clock");
                sprintf(stdbuf, "bus_stimulus_1");
                sc_trace(tf, A, stdbuf );
                sprintf(stdbuf, "bus_stimulus_2");
                sc_trace(tf, B, stdbuf );
		sprintf(stdbuf, "bus_stimulus_3");
                sc_trace(tf, Cin, stdbuf );
                sprintf(stdbuf, "bus_adder_sum");
                sc_trace(tf, S1, stdbuf );
        sc_trace(tf, C2, "bus_adder_carry");
       int sim_time = 1000;
        if (argc == 2)
                sim_time = atoi(argv[1]);

        sc_start(sim_time, SC_NS);

        sc_close_vcd_trace_file(tf);
        return 0;
}


