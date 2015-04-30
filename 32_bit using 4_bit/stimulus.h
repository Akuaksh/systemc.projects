#ifndef STIMULUS_H
#define STIMULUS_H

#include "systemc.h"

SC_MODULE (stimulus) {

	sc_in <bool> clk;
	sc_out < sc_uint<32> > a;
	sc_out < sc_uint<32> > b;
	sc_out < sc_uint<1> > c;

	void func_stimulus (void);

	SC_CTOR (stimulus) {
		SC_THREAD (func_stimulus);
			sensitive << clk.pos();
	}
};

#endif



