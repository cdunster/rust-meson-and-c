cargo = find_program('cargo', required : true)

rust_lib = custom_target(
  'rust_lib',
  build_always_stale : true,
  input : 'Cargo.toml',
  output : ['librust_lib.a'],
  command : [cargo, 'build', '--manifest-path', '@INPUT@', '-Z', 'unstable-options', '--out-dir', meson.current_build_dir()],
)
