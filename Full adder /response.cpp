#include "response.h"

void
response::
response_thread( void ) {
        sc_uint <1> s_t;
        sc_uint <1> c_t;
        while(true) {
        wait();
        s_t = sum.read();
        c_t = carry.read();
        c.write(s_t||c_t); 
        }
        return;
}

