#ifndef STIMULUS_H
#define STIMULUS_H

#include "systemc.h"
//File for the input signals for the 4 Bit adder 
SC_MODULE (stimulus) {
	sc_in <bool> clock;
	sc_out < sc_bv<4> > data_1;
	sc_out < sc_bv<4> > data_2;
	sc_out < sc_bv<1> > data_3;

	void stimulus_thread (void);

	SC_CTOR (stimulus) {
		SC_THREAD (stimulus_thread);
		sensitive << clock.pos();
	}
};

#endif
