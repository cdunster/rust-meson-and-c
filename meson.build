project(
  'rust_and_c',
  ['c', 'rust'],
  version : '0.1',
  default_options : ['warning_level=3'],
)

subdir('rust')

# The dl library is required by Rust to link the library.
deps = [
  meson.get_compiler('c').find_library('dl', required: false),
  dependency('threads'),
]

executable(
  'rust_and_c',
  'src/main.c',
  link_with : rust_lib,
  dependencies : deps,
)

executable(
  'only_c_code',
  'src/main.c',
  'src/greeting.c',
)