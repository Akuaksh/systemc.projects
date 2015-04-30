#include "stimulus.h"

void 
STIMULUS::
stimulus_thread(void)
{
	// Initialize
	for ( int i = 0; i < 8; i++ ) {
		a_data[i] = 0x0;
		b_data[i] = 0x0;
	}
	carry_data = 0x0;
	int counter = 1;

	while(true) {
		// Put the results on the output
		for ( int i = 0; i < 8; i++ ) {
			a[i].write(a_data[i]);
			b[i].write(b_data[i]);
		}
		carry.write (carry_data);

		// wait for new event
		wait();

		// Initialize pseudo random operands in the 11th clock
		if ( counter == 10 ) {
			for ( int i = 0; i < 8; i++ ) {
				a_data[i] = rand()%16;
				b_data[i] = rand()%16;
			}
			carry_data = rand()%2;
			counter = 0;
		}
		counter++;
	}
}
