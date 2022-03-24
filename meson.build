project(
  'rust_and_c',
  ['c', 'rust'],
  version : '0.1',
  default_options : ['warning_level=3'],
)

subdir('rust')

find_rust_obj = find_program('rust/find_rust_obj.sh')

# The output is sanitized and made into an array.
rust_objects = run_command(find_rust_obj, 'debug').stdout().strip().split('\n')

message('Found objects:')
message(rust_objects)

# The dl library is required by Rust to link the library.
deps = [
  meson.get_compiler('c').find_library('dl', required: false),
  dependency('threads'),
]

executable(
  'rust_and_c',
  'src/main.c',
  objects: rust_objects,
  dependencies: deps,
)
