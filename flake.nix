{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        devShell = with pkgs; mkShell {
          buildInputs = [
            git
            gcc
            clang_12
            meson
            ninja
            rustup
            rust-analyzer
          ];
        };
      }
    );
}
