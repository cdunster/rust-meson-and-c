cargo = find_program('cargo', required : true)
cargo_result = run_command(cargo, 'build')
cargo_stdout = cargo_result.stdout().strip()
cargo_stderr = cargo_result.stderr().strip()
if cargo_stderr != ''
  message(cargo_stderr)
elif cargo_stdout != ''
  message(cargo_stdout)
else
  message('Cargo is done')
endif
