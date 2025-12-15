{
  inputs = {
    nixpkgs.url = "nixpkgs/nixpkgs-unstable";
    dsh.url = "github:necauqua/basic-dev-shell";
    dsh.inputs.nixpkgs.follows = "nixpkgs";
  };
  outputs = { dsh, ... }:
    dsh.make (pkgs: with pkgs; [
      nodejs
      python3
    ]);
}
