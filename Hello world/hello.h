#ifndef Hello_included
#define Hello_included
#include "systemc.h"

SC_MODULE (hello_world) 
{
  void hello_thread(void);
  SC_CTOR (hello_world) 
	{
		SC_THREAD(hello_thread); 
 	 }
};
#endif
