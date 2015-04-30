#include"systemc.h"
#include"hello.h"

int sc_main(int argc, char* argv[])
{
  hello_world hello("HELLO");
  // Print the hello world
  hello.hello_thread();
  return(0);
}
