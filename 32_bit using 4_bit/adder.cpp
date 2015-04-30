#include "adder.h"

void 
adder::
func_adder(void)
{
	sc_uint<4> t_in1;
	sc_uint<4> t_in2,t_out1,t_out2;
	sc_uint<1> t_in3;

	while(true) {
		wait();
		// Read input
		t_in1 = input1.read();
		t_in2 = input2.read();
		t_in3 = input3.read();
		
		t_out1=(t_in1+t_in2+t_in3)%16;
		t_out2=	(t_in1+t_in2+t_in3)/16;
		
		out1.write(t_out1);
		out2.write(t_out2);	
		

		

	}

}
