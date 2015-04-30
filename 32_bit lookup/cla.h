#ifndef CLA_H_INCLUDED
#define CLA_H_INCLUDED

#include "systemc.h"

SC_MODULE(CLA) {
        sc_in< sc_bv<4> > addend;	// Addend
        sc_in< sc_bv<4> > augend;	// Augend
        sc_in< sc_bv<4> > carry_in;	// Carry in
        sc_out< sc_bv<4> > sum;		// Sum
        sc_out< sc_bv<4> > cag;		// CAG
        sc_in< bool > clk;		// Clock

	void cla_thread(void);

	sc_bv<4> r_data;
	sc_bv<4> cag_data;

	// Constructor
	SC_CTOR(CLA) {
		SC_THREAD(cla_thread);
		sensitive << clk.pos();
	}
};

#endif
