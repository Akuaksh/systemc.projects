#ifndef CLG_H_INCLUDED
#define CLG_H_INCLUDED

#include "systemc.h"

SC_MODULE(CLG) {
        sc_in< sc_bv<4> > ag0;		// First CAG
        sc_in< sc_bv<4> > ag1;		// Second CAG
        sc_in< sc_bv<4> > carry_in;	// Carry in
        sc_out< sc_bv<4> > cag;		// CAG
        sc_out< sc_bv<4> > carry_out;	// Carries generated
        sc_in< bool > clk;		// Clock

	void clg_thread(void);

	sc_bv<4> cag_data;
	sc_bv<4> carry_data;

	// Constructor
	SC_CTOR(CLG) {
		SC_THREAD(clg_thread);
		sensitive << clk.pos();
	}
};

#endif
