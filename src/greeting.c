#include <stdio.h>
#include "greeting.h"

void greet(void)
{
    printf("Hello again from C code!\n");
}

MyEnum advanced_fn(uint8_t* array) {
  (void)array;
  printf("array[3] = %u\n", array[3]);
  return ERR_OK;
}
