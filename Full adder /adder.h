#ifndef half_adder
#define half_adder

#include "systemc.h"

SC_MODULE(H_ADD)
{
  sc_in< sc_bv<1> > a;
  sc_in< sc_bv<1> > b;
  sc_out< sc_bv<1> > s;
  sc_out< sc_bv<1> > c;

 void add_thread(void);
 //Constructor

 SC_CTOR(H_ADD)
 {
	SC_THREAD(add_thread);
	sensitive<<a <<b ;
 }

};
#endif
