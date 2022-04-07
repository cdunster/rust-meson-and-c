#include <stdint.h>

typedef enum {
  ERR_OK,
} MyEnum;

// This is the "library" function to be called from Rust or C.
void greet(void);

MyEnum advanced_fn(uint8_t* array);
