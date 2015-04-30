#include"divider.h"

void divider::func_divider(void)
{
	sc_uint<32> t_in1,t_in2;
	sc_uint<1> t_in3,t_out1;
while(1)
{
	t_in3=input3.read();
	t_in2=input2.read();
	t_in1=input1.read();

	output1.write(t_in3);

output2.write(t_in2.range(3,0));
output3.write(t_in2.range(7,4));
output4.write(t_in2.range(11,8));
output5.write(t_in2.range(15,12));
output6.write(t_in2.range(19,16));
output7.write(t_in2.range(23,20));
output8.write(t_in2.range(27,24));
output9.write(t_in2.range(31,28));

output10.write(t_in1.range(3,0));
output11.write(t_in1.range(7,4));
output12.write(t_in1.range(11,8));
output13.write(t_in1.range(15,12));
output14.write(t_in1.range(19,16));
output15.write(t_in1.range(23,20));
output16.write(t_in1.range(27,24));
output17.write(t_in1.range(31,28));
wait();
}
}



