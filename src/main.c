#include <stdio.h>
#include <stdint.h>
#include "greeting.h"

// Main entry point of the executable that will call Rust code.
int main()
{
  printf("Hello from C code!\n");
  greet();
  uint8_t array[] = { 0, 1, 2, 3, 4 };
  MyEnum res = advanced_fn(array);
  (void)res;
}
