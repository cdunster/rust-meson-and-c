/// Function to be called externally from C code.
#[no_mangle]
extern "C" fn greet() {
    println!("Hello from Rust code!");
}
