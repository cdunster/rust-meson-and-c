#include <stdio.h>

// This is the Rust function to be called.
void greet(void);

// Main entry point of the executable that will call Rust code.
int main() {
    greet();
    printf("Hello from C code!");
}
