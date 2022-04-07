/// Function to be called externally from C code.
#[no_mangle]
extern "C" fn greet() {
    // Using a macro from an external crate to test it links properly.
    colour::green_ln!("Hello from Rust code!");
}

#[no_mangle]
extern "C" fn advanced_fn(array: *const u8) -> u32 {
    let val = unsafe { *array.offset(3) };
    colour::green_ln!("array[3] = {}", val);
    0
}
