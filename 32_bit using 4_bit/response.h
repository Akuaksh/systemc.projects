#include"systemc.h"

SC_MODULE(response)
{
	sc_in <sc_uint<4> > input1;
	sc_in <sc_uint<4> > input2;
	sc_in <sc_uint<4> > input3;
	sc_in <sc_uint<4> > input4;
	sc_in <sc_uint<4> > input5;
	sc_in <sc_uint<4> > input6;
	sc_in <sc_uint<4> > input7;
	sc_in <sc_uint<4> > input8;
	sc_in <sc_uint<1> > input9;
	sc_out <sc_uint<32> > out1;
	sc_out <sc_uint<1> > out2;
	
	void func_response(void);
	
	SC_CTOR(response)
	{
		SC_THREAD(func_response);
			sensitive<<input1<<input2<<input3<<input4<<input5<<input6<<input7<<input8<<input9;
	}
};


