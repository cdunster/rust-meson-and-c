#include <stdio.h>
#include "greeting.h"

// Main entry point of the executable that will call Rust code.
int main()
{
  printf("Hello from C code!\n");
  greet();
}
