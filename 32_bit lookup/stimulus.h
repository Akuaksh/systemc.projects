#ifndef STIMULUS_H_INCLUDED
#define STIMULUS_H_INCLUDED

#include "systemc.h"

SC_MODULE(STIMULUS) {

	sc_in<bool> clk;		// Clock
	sc_out< sc_bv<4> > a[8];	// First operand
	sc_out< sc_bv<4> > b[8];	// Second operand
	sc_out< sc_bv<4> > carry;	// Second operand

	void stimulus_thread(void);

	sc_bv<4> a_data[8];
	sc_bv<4> b_data[8];
	sc_bv<4> carry_data;
    
	// Constructor
	SC_CTOR(STIMULUS) {
		SC_THREAD(stimulus_thread);
		sensitive << clk.pos();
	}
};

#endif
