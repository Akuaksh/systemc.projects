#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED

#include "systemc.h"

SC_MODULE(adder) {
	sc_in< sc_uint<4> > input1;  // First operand
	sc_in< sc_uint<4> >  input2;  // Second operand
	sc_in< sc_uint<1> >  input3;  // Carry 
	sc_out< sc_uint<4> >  out1;  // Result
	sc_out< sc_uint<1> > out2;

	void func_adder(void);
    
	// Constructor
	SC_CTOR(adder) {
		SC_THREAD(func_adder);
		sensitive << input1 << input2 << input3;
	}
};

#endif
