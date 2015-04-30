#include "response.h"

void
response::
response_thread( void ) {
	sc_uint <4> s;
	sc_uint <1> c;
	while(true) {
	wait();
	s = sum.read();
	c = carry.read();
        cout <<"sum ="<< s <<"carry = "<< c << endl;
	}
	return;
}
