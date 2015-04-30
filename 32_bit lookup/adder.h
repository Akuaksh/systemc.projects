#ifndef ADDER_H_INCLUDED
#define ADDER_H_INCLUDED

#include "systemc.h"
#include "cla.h"
#include "clg.h"

SC_MODULE(ADDER) {

	char stdbuf[256];

	// PORTS
	sc_in< sc_bv<4> > addend[8];	// Addend
	sc_in< sc_bv<4> > augend[8];	// Augend
	sc_in< sc_bv<4> > carry_in;	// Carry_in
	sc_out< sc_bv<4> > sum[8];	// Sum
	sc_out< sc_bv<4> > carry_out;	// Carry
	sc_in<bool> clk;		// Clock

	// SIGNALS
        sc_signal< sc_bv<4> > bus_cag_00;
        sc_signal< sc_bv<4> > bus_cag_01;
        sc_signal< sc_bv<4> > bus_cag_02;
        sc_signal< sc_bv<4> > bus_cag_03;
        sc_signal< sc_bv<4> > bus_cag_04;
        sc_signal< sc_bv<4> > bus_cag_05;
        sc_signal< sc_bv<4> > bus_cag_06;

	// MODULES
	CLA* cla[8];

	void adder_thread(void);

	// Constructor
	SC_CTOR(ADDER) {
		for ( int i = 0; i < 8; i++ ) {
			sprintf(stdbuf, "cla[%d]", i);
			cla[i] = new CLA (stdbuf);
		}
		// CONNECTIONS
		cla[0]->addend(addend[0]);
		cla[0]->augend(augend[0]);
		cla[0]->carry_in(carry_in);
		cla[0]->sum(sum[0]);
		cla[0]->cag(bus_cag_00);
		cla[0]->clk(clk);
		cla[1]->addend(addend[1]);
		cla[1]->augend(augend[1]);
		cla[1]->carry_in(bus_cag_00);
		cla[1]->sum(sum[1]);
		cla[1]->cag(bus_cag_01);
		cla[1]->clk(clk);
		cla[2]->addend(addend[2]);
		cla[2]->augend(augend[2]);
		cla[2]->carry_in(bus_cag_01);
		cla[2]->sum(sum[2]);
		cla[2]->cag(bus_cag_02);
		cla[2]->clk(clk);
		cla[3]->addend(addend[3]);
		cla[3]->augend(augend[3]);
		cla[3]->carry_in(bus_cag_02);
		cla[3]->sum(sum[3]);
		cla[3]->cag(bus_cag_03);
		cla[3]->clk(clk);
		cla[4]->addend(addend[4]);
		cla[4]->augend(augend[4]);
		cla[4]->carry_in(bus_cag_03);
		cla[4]->sum(sum[4]);
		cla[4]->cag(bus_cag_04);
		cla[4]->clk(clk);
		cla[5]->addend(addend[5]);
		cla[5]->augend(augend[5]);
		cla[5]->carry_in(bus_cag_04);
		cla[5]->sum(sum[5]);
		cla[5]->cag(bus_cag_05);
		cla[5]->clk(clk);
		cla[6]->addend(addend[6]);
		cla[6]->augend(augend[6]);
		cla[6]->carry_in(bus_cag_05);
		cla[6]->sum(sum[6]);
		cla[6]->cag(bus_cag_06);
		cla[6]->clk(clk);
		cla[7]->addend(addend[7]);
		cla[7]->augend(augend[7]);
		cla[7]->carry_in(bus_cag_06);
		cla[7]->sum(sum[7]);
		cla[7]->cag(carry_out);
		cla[7]->clk(clk);
	}
};

#endif
