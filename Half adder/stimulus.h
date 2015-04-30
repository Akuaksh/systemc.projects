#ifndef stimuli
#define stimuli 

#include "systemc.h"

SC_MODULE(STIMULUS)
{
	sc_in<bool>clk;
	sc_out < sc_bv<1> > a;
        sc_out < sc_bv<1> > b;
 
 	void stimulus_thread(void);
	
	//constructor
	SC_CTOR(STIMULUS)
	{
		SC_THREAD(stimulus_thread);
 		sensitive<<clk.pos();
	}

};
#endif
