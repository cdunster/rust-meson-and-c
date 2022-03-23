project(
  'rust_and_c',
  ['c', 'rust'],
  version : '0.1',
  default_options : ['warning_level=3'],
)

# Create a list of dependencies required by Rust.
# The dl library is required by Rust to link the library.
deps = [
  meson.get_compiler('c').find_library('dl', required: false),
  dependency('threads'),
]

# Must specify rust_crate_type otherwise the generated output
# won't be compatible with the c linker.
rust_lib = static_library(
  'rust_lib',
  './rust/src/lib.rs',
  rust_crate_type: 'staticlib',
)

# Create a c executable that links with a rust library.
executable(
  'rust_and_c',
  './src/main.c',
  link_with: rust_lib,
  dependencies: deps,
)
