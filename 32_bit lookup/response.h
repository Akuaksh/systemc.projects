#ifndef RESPONSE_H_INCLUDED
#define RESPONSE_H_INCLUDED

#include "systemc.h"

SC_MODULE(RESPONSE) {

	sc_in< sc_bv<4> > sum[8];		// Sum
	sc_in< sc_bv<4> > carry;		// Carry
	sc_in<bool> clk;

	void response_thread(void);
    
	// Constructor
	SC_CTOR(RESPONSE) {
		SC_THREAD(response_thread);
			sensitive << clk.pos();
	}
};

#endif
