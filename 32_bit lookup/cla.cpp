#include "cla.h"

void
CLA::
cla_thread(void)
{
        // Initialize
        r_data = 0x0;
        cag_data = 0x0;
        
        sc_uint<4> addend_t;
        sc_uint<4> augend_t;
        sc_uint<4> carry_t;
        sc_uint<4> cag_t;
        bool c;
	int counter = 1;
        
        while (true) {
        
        	// Put the results on the output
                sum.write (r_data);
                cag.write (cag_data);
                                                                                                // wait for new event
                wait();
                                                                                                // Read the input
                addend_t = addend.read();
                augend_t = augend.read();
                carry_t = carry_in.read();
                c = carry_t[3];
        
	        // Determine output
                switch (c) {
                case 0:
        	        switch (addend_t) {
			case 0x0:
				switch (augend_t) {
				case 0x0:
					r_data = 0x0;
					cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x1;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x2;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xd:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xe:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xf:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                }
                                break;
                        case 0x1:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x1;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x2;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xd:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xe:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0xf:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x2:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x2;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xd:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0xe:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x3:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0xd:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x4:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0xc:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x5:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0xb:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x6:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0xa:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x7:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x9:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0xa:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0xb:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0xd:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x6;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x8:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x8:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x9:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x7:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xa:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x6:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0x7:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x8;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xb:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x5:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0x6:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x7:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0xd:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0xa;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xc:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x4:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0x5:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x6:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x7:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x8;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x9;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0xa;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0xb;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xd:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x3:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0x4:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x5:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x6:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0x7:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0xb:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x9;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0xa;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0xb;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0xc;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xe:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x2:
                                        r_data = 0x0;
                                        cag_data = 0x9;
                                        break;
                                case 0x3:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x4:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x5:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0x6:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0x7:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0xa:
                                        r_data = 0x8;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0xa;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0xb;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0xc;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0xd;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xf:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xf;
                                        cag_data = 0x2;
                                        break;
                                case 0x1:
                                        r_data = 0x0;
                                        cag_data = 0xb;
                                        break;
                                case 0x2:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x3:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0x4:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0x5:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0x6:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                case 0x7:
                                        r_data = 0x6;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0x9:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xa:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                case 0xb:
                                        r_data = 0xa;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0xb;
                                        cag_data = 0xb;
                                        break;
                                case 0xd:
                                        r_data = 0xc;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0xd;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0xe;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        }
                        break;
                case 1:
                        switch (addend_t) {
                        case 0x0:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x1;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x2;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xd:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xe:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0xf:
                                        r_data = 0x0;
                                        cag_data = 0x2;
                                        break;
                                }
                                break;
                        case 0x1:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x2;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xd:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0xe:
                                        r_data = 0x0;
                                        cag_data = 0x2;
                                        break;
                                case 0xf:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x2:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x3;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0xd:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0xe:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x3:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x4;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0xc:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0xd:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x4:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x5;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0xb:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0xc:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x5:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x6;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0xa:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0xb:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x6:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x7;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x9:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0xa:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x6;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x7:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x8;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x8:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x9:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0xa:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0xb:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0xd:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x6;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x8:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x9;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x7:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x8:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0x9:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xa;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x6:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x7:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xa:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xb;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x5:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x6:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x7:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0x9;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0xa;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xb:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xc;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x4:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x5:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x6:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0x7:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x4;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0xc:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xd:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0xa;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0xb;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xc:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xd;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x3:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x4:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x5:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x6:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0x7:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0x9;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0xa;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0xb;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0xc;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xd:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xe;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x2:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x3:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x4:
                                        r_data = 0x2;
                                        cag_data = 0x9;
                                        break;
                                case 0x5:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0x6:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0x7:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x6;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0xa:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xb:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0xa;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0xb;
                                        cag_data = 0x9;
                                        break;
                                case 0xe:
                                        r_data = 0xc;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0xd;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xe:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0xf;
                                        cag_data = 0x0;
                                        break;
                                case 0x1:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x2:
                                        r_data = 0x1;
                                        cag_data = 0x9;
                                        break;
                                case 0x3:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0x4:
                                        r_data = 0x3;
                                        cag_data = 0x9;
                                        break;
                                case 0x5:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0x6:
                                        r_data = 0x5;
                                        cag_data = 0x9;
                                        break;
                                case 0x7:
                                        r_data = 0x6;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x7;
                                        cag_data = 0x9;
                                        break;
                                case 0x9:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0xa:
                                        r_data = 0x9;
                                        cag_data = 0x9;
                                        break;
                                case 0xb:
                                        r_data = 0xa;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0xb;
                                        cag_data = 0x9;
                                        break;
                                case 0xd:
                                        r_data = 0xc;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0xd;
                                        cag_data = 0x9;
                                        break;
                                case 0xf:
                                        r_data = 0xe;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        case 0xf:
                                switch (augend_t) {
                                case 0x0:
                                        r_data = 0x0;
                                        cag_data = 0xa;
                                        break;
                                case 0x1:
                                        r_data = 0x1;
                                        cag_data = 0xb;
                                        break;
                                case 0x2:
                                        r_data = 0x2;
                                        cag_data = 0xb;
                                        break;
                                case 0x3:
                                        r_data = 0x3;
                                        cag_data = 0xb;
                                        break;
                                case 0x4:
                                        r_data = 0x4;
                                        cag_data = 0xb;
                                        break;
                                case 0x5:
                                        r_data = 0x5;
                                        cag_data = 0xb;
                                        break;
                                case 0x6:
                                        r_data = 0x6;
                                        cag_data = 0xb;
                                        break;
                                case 0x7:
                                        r_data = 0x7;
                                        cag_data = 0xb;
                                        break;
                                case 0x8:
                                        r_data = 0x8;
                                        cag_data = 0xb;
                                        break;
                                case 0x9:
                                        r_data = 0x9;
                                        cag_data = 0xb;
                                        break;
                                case 0xa:
                                        r_data = 0xa;
                                        cag_data = 0xb;
                                        break;
                                case 0xb:
                                        r_data = 0xb;
                                        cag_data = 0xb;
                                        break;
                                case 0xc:
                                        r_data = 0xc;
                                        cag_data = 0xb;
                                        break;
                                case 0xd:
                                        r_data = 0xd;
                                        cag_data = 0xb;
                                        break;
                                case 0xe:
                                        r_data = 0xe;
                                        cag_data = 0xb;
                                        break;
                                case 0xf:
                                        r_data = 0xf;
                                        cag_data = 0xb;
                                        break;
                                }
                                break;
                        }
                        break;
		}
		if ( counter == 10 ) {
			r_data = 0x0;
			cag_data = 0x0;
			counter = 0;
		}
		counter++;
        }
}
