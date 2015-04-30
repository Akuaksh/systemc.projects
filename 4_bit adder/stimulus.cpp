#include "stimulus.h"

void
stimulus::
stimulus_thread( void ) {
	while (true) {
		for ( unsigned int i = 0; i < 2; i++ ) {
			for (unsigned int j = 0; j < 16; j++ ) {
				for (unsigned int k = 0; k < 16; k++ ) {
					data_1.write ( k );
					data_2.write ( j );
					data_3.write ( i );
					wait();
				}
			}
		}
	}
	return;
}
