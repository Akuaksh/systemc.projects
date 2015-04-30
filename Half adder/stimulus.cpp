#include "stimulus.h"

void
STIMULUS::
stimulus_thread( void ) {
	while (true) {
		for ( unsigned int i = 0; i < 2; i++ ) {
			for (unsigned int j = 0; j < 2; j++ ) {
					a.write ( j );
					b.write ( i );
					wait();
		       }
		}
	}
	return;
}
