#include "stimulus.h"

void stimulus :: func_stimulus( void ) {
	while (true) 
	{
		for ( unsigned int i = 0; i <=1; i++ ) {
			for (unsigned int j = 2; j <=200; j++ ) {
				for (unsigned int k = 4; k <=200; k++ ) 
				{
					a.write ( k );
					b.write ( j );
					c.write ( i );
					wait();
				}
			}
		}
	}
	return;
}
