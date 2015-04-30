#ifndef ADD_H_INCLUDED
#define ADD_H_INCLUDED

#include "systemc.h"

SC_MODULE(ADD) {
	sc_in< sc_bv<4> >  a_t;  // First operand
	sc_in< sc_bv<4> >  b_t;  // Second operand
	sc_in< sc_bv<1> >  ci;  // Carry 
	sc_out< sc_bv<4> >  sum;  // Result
	sc_out< sc_bv<1> > co;

	void add_thread(void)
	{
	
	sc_signal< sc_bv <1> >r1,r2,r3,r4,r5,r6,r7;
      
	sc_signal< sc_bv <1> >co_t,r8;
	NAND n1("nand");
	NAND n2("nand");
	NAND n3("nand");
        NAND n4("nand");
	NAND n5("nand");
	NAND n6("nand");
	NAND n7("nand");
	NAND n8("nand");
	NAND n9("nand");

	while(true)
	{	
	  wait();
	  n1.a(a_t);
 	  n1.b(b_t);
          n1.c(r1);
          n2.b(r1);
          n3.a(r1);
	  n9.b(r1);
	  n2.a(a_t);
	  n2.c(r2);
	  n4.a(r2);
	  n3.b(b_t);
	  n3.c(r3);
	  n4.b(r3);
	  n4.c(r4);
	  n6.a(r4);
	  n5.a(r4);
	  n5.b(c_t);
    	  n5.c(r5);
	  n9.a(r5);
	  n7.a(r5);
	  n7.b(c_t);
	  n6.b(r5);
	  n7.c(r6);
	  n8.b(r6);
	  n6.c(r7);
	  n8.a(r7);
          n8.c(sum);
          n9.c(co);
         
  	  
	}

	}
    
	// Constructor
	SC_CTOR(ADD) {
		SC_THREAD(add_thread);
		sensitive << a << b << ci;
	}
};

#endif
