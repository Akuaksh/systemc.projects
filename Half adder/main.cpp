#include "systemc.h"
#include "response.h"
#include "stimulus.h"
#include "adder.h"

int sc_main(int argc, char* argv[])
{sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated", sc_core::SC_DO_NOTHING );
        //Signals In the adder
        sc_signal< sc_bv <1> > A;   //Input Var 1(1 Bit)
        sc_signal< sc_bv <1> > B; 
        sc_signal< sc_bv <1> > S;
	sc_signal< sc_bv <1> > C;
         sc_clock        clk("clock", 60); // clock signal with 20 nano sec
        char stdbuf[256];
        H_ADD adder("adder"); 
        STIMULUS stim("stim"); 
        response resp("resp"); 

       stim.clk(clk);
       stim.a(A);
       stim.b(B);
       adder.a(A);
       adder.b(B);
       adder.s(S);
       adder.c(C);
       resp.sum(S);
       resp.carry(C);

       sc_trace_file *tf;
        tf = sc_create_vcd_trace_file("h_adder");
        tf->set_time_unit(1, SC_NS);
        sc_trace(tf, clk, "clock");
                sprintf(stdbuf, "bus_stimulus_1");
                sc_trace(tf, A, stdbuf );
                sprintf(stdbuf, "bus_stimulus_2");
                sc_trace(tf, B, stdbuf );
                sprintf(stdbuf, "bus_adder_sum");
                sc_trace(tf, S, stdbuf );
        sc_trace(tf, C, "bus_adder_carry");
       int sim_time = 1000;
        if (argc == 2)
                sim_time = atoi(argv[1]);

        sc_start(sim_time, SC_NS);

        sc_close_vcd_trace_file(tf);
        return 0;
}


