#include"systemc.h"

SC_MODULE(divider)
{
	sc_in <sc_uint<32> > input1,input2;
	sc_in <sc_uint<1> > input3;
	sc_out<sc_uint<1> > output1;
	sc_out<sc_uint<4> > output2;
	sc_out<sc_uint<4> > output3;
	sc_out<sc_uint<4> > output4;
	sc_out<sc_uint<4> > output5;
	sc_out<sc_uint<4> > output6;
	sc_out<sc_uint<4> > output7;
	sc_out<sc_uint<4> > output8;
	sc_out<sc_uint<4> > output9;
	sc_out<sc_uint<4> > output10;
	sc_out<sc_uint<4> > output11;
	sc_out<sc_uint<4> > output12;
	sc_out<sc_uint<4> > output13;
	sc_out<sc_uint<4> > output14;
	sc_out<sc_uint<4> > output15;
	sc_out<sc_uint<4> > output16;
	sc_out<sc_uint<4> > output17;

	void func_divider(void);

	SC_CTOR(divider)
	{
		SC_THREAD(func_divider);
			sensitive<<input1<<input2<<input3;
	}
};

