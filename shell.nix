{
  pkgs ? import <nixpkgs> { },
}:

pkgs.mkShell {
  packages = with pkgs; [
    clang-tools
    clang
    bear
    nil
  ];
}
