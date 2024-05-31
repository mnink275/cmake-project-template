# Simple C++ project template for Linux

## Features:
- C++ sources and headers directories building via CMake
- Google Tests via FetchContent
- fmt lib via Git Submodule
- CI via Github Actions
- clang-format for code formatting
- Makefile with convenient commands

## Prereguisetes for use with VSCode:
- [Clangd](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) extention (used as static analysiser, code browsing, IntelliSense)
- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) extention (used as debugger). Note: the extention's IntelliSense should be disabled (check [settings.json](.vscode/settings.json))

## Usage:
- Use `make build-(debug/release)` to produce (debug/release) build
- Use `make run-(debug/release)` to build and instantly run a binary
- Use `make tests` to run tests with debug build
- Use `make clean` to clean build directories
- Use `make format` to code formatting
