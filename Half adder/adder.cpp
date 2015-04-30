#include "adder.h"

void H_ADD::add_thread(void)
{
   sc_uint<1> a_t;
   sc_uint<1> b_t;
   sc_uint<1> s_t;
   sc_uint<1> c_t;
  
	while(true)
	{
	  	wait();
		//read input
		a_t = a.read();
		b_t = b.read();
		
		//compute result
	        if(a_t == b_t)
  			s_t = 0;
		else 
			s_t = 1;
		
	       c_t = a_t && b_t;

              //Put the result onto the output
		s.write(s_t);
 		c.write(c_t);
	}          
}
