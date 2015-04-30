#include "stimulus.h"
#include "adder.h"
#include "cla.h"
#include "clg.h"
#include "response.h"

int
sc_main(int argc, char *argv[])
{
	sc_report_handler::
	set_actions("/IEEE_Std_1666/deprecated", SC_DO_NOTHING);

	char stdbuf[256];

	// SIGNALS
	sc_signal< sc_bv<4> > bus_stimulus_1[8];
	sc_signal< sc_bv<4> > bus_stimulus_2[8];
	sc_signal< sc_bv<4> > bus_adder_sum[8];
	sc_signal< sc_bv<4> > bus_adder_carry;
	sc_signal< sc_bv<4> > bus_carry_in;

	// MODULES
	STIMULUS stimulus("stimulus");
	ADDER adder("adder");
	RESPONSE response("response");
	sc_clock clk("clock", 20, 0.5, 0, false);		// Clock

	// CONNECTIONS
	stimulus.clk(clk);
	stimulus.carry(bus_carry_in);
	adder.carry_out(bus_adder_carry);
	adder.carry_in(bus_carry_in);
	adder.clk(clk);
	response.carry(bus_adder_carry);
	response.clk(clk);
	for ( int i = 0; i < 8; i++ ) {
		stimulus.a[i] ( bus_stimulus_1[i] );
		stimulus.b[i] ( bus_stimulus_2[i] );
		adder.addend[i] ( bus_stimulus_1[i] );
		adder.augend[i] ( bus_stimulus_2[i] );
		adder.sum[i] ( bus_adder_sum[i] );
		response.sum[i] ( bus_adder_sum[i] );
	}

	// TRACING
	sc_trace_file *tf;
	tf = sc_create_vcd_trace_file("adder");
        tf->set_time_unit(1, SC_NS);
	sc_trace(tf, clk, "clock");
	for ( int i = 0; i < 8; i++ ) {
		sprintf(stdbuf, "bus_stimulus_1(%d)", i);
		sc_trace(tf, bus_stimulus_1[i], stdbuf );
		sprintf(stdbuf, "bus_stimulus_2(%d)", i);
		sc_trace(tf, bus_stimulus_2[i], stdbuf );
		sprintf(stdbuf, "bus_adder_sum(%d)", i);
		sc_trace(tf, bus_adder_sum[i], stdbuf );
	}
	sc_trace(tf, bus_adder_carry, "bus_adder_carry");
	sc_trace(tf, adder.bus_cag_00, "bus_cag_00");
	sc_trace(tf, adder.bus_cag_01, "bus_cag_01");
	sc_trace(tf, adder.bus_cag_02, "bus_cag_02");
	sc_trace(tf, adder.bus_cag_03, "bus_cag_03");
	sc_trace(tf, adder.bus_cag_04, "bus_cag_04");
	sc_trace(tf, adder.bus_cag_05, "bus_cag_05");
	sc_trace(tf, adder.bus_cag_06, "bus_cag_06");

	// SIMULATION
	int sim_time = 1000;
	if (argc == 2)
		sim_time = atoi(argv[1]);

	sc_start(sim_time, SC_NS);

	sc_close_vcd_trace_file(tf);

	return 0;
}
