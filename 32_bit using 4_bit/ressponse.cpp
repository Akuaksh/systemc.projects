#include "response.h"
#include "math.h"

void response :: func_response(void)
{
	sc_uint<4> t_in1,t_in2,t_in3,t_in4,t_in5,t_in6,t_in7,t_in8;
	sc_uint<1> t_in9,t_out2;
	
	sc_uint<32> t_out1;
	
	while(true)
	{
		t_in1=input1.read();
		t_in2=input2.read();
		t_in3=input3.read();
		t_in4=input4.read();
		t_in5=input5.read();
		t_in6=input6.read();
		t_in7=input7.read();
		t_in8=input8.read();
		t_in9=input9.read();
		
		t_out1=(t_in1)+(t_in2*16)+(t_in3*pow(16,2))+(t_in4*pow(16,3))+(t_in5*pow(16,4));
		t_out1+=(t_in6*pow(16,5))+(t_in7*pow(16,6))+(t_in8*pow(16,7));
		
		t_out2=t_in9;
		
		out1.write(t_out1);
		out2.write(t_out2);
		
		wait();
	}
}
