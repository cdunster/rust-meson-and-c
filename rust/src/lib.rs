/// Function to be called externally from C code.
#[no_mangle]
extern "C" fn greet() {
    // Using a macro from an external crate to test it links properly.
    colour::green_ln!("Hello from Rust code!");
}
