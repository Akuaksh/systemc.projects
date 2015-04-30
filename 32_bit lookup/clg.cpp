#include "clg.h"

void
CLG::
clg_thread(void)
{
        // Initialize
        cag_data = 0x0;
        carry_data = 0x0;
        
        sc_uint<4> ag0_t;
        sc_uint<4> ag1_t;
        sc_uint<4> carry_in_t;
        bool c;
	int counter = 1;
        
        while (true) {
        
        	// Put the results on the output
                cag.write (cag_data);
                carry_out.write (carry_data);
                                                                                                // wait for new event
                wait();
                                                                                                // Read the input
                ag0_t = ag0.read();
                ag0_t = ag0_t % 4;
                ag1_t = ag1.read();
                ag1_t = ag1_t % 4;
                carry_in_t = carry_in.read();
                c = carry_in_t[3];
        
	        // Determine output
                switch (c) {
                case 0:
        	        switch (ag1_t) {
			case 0x0:
				switch (ag0_t) {
				case 0x0:
					cag_data = 0x0;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x0;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0x0;
					carry_data = 0x0;
                                        break;
                                case 0x3:
                                        cag_data = 0x0;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        case 0x1:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x9;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0x9;
					carry_data = 0x0;
                                        break;
                                case 0x3:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        case 0x2:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x0;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0x2;
					carry_data = 0x0;
                                        break;
                                case 0x3:
                                        cag_data = 0xb;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        case 0x3:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x9;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0xb;
					carry_data = 0x0;
                                        break;
                                case 0x3:
                                        cag_data = 0xb;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        }
                        break;
                case 1:
                        switch (ag1_t) {
                        case 0x0:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x0;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x0;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0x0;
					carry_data = 0x8;
                                        break;
                                case 0x3:
                                        cag_data = 0x0;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        case 0x1:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x9;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x3:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        case 0x2:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x0;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0xa;
					carry_data = 0x8;
                                        break;
                                case 0x3:
                                        cag_data = 0xb;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        case 0x3:
                                switch (ag0_t) {
                                case 0x0:
                                        cag_data = 0x9;
					carry_data = 0x0;
                                        break;
                                case 0x1:
                                        cag_data = 0x9;
					carry_data = 0x8;
                                        break;
                                case 0x2:
                                        cag_data = 0xb;
					carry_data = 0x8;
                                        break;
                                case 0x3:
                                        cag_data = 0xb;
					carry_data = 0x8;
                                        break;
                                }
                                break;
                        }
                        break;
		}
		if ( counter == 10 ) {
			cag_data = 0x0;
			carry_data = 0x0;
			counter = 0;
		}
		counter++;
        }
}
