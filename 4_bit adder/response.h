#ifndef RESPONSE_H
#define RESPONSE_H

#include "systemc.h"

SC_MODULE (response) {
	sc_in < sc_bv<4> > sum;
	sc_in < sc_bv<1> > carry;

	void response_thread (void);

	SC_CTOR (response){
		SC_THREAD (response_thread);
		sensitive << sum;
		sensitive << carry;
	}
};

#endif
