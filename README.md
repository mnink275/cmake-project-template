# Simple C++17 project template

## Features:
- C++ sources and headers directories building via CMake
- Google Tests via FetchContent
- fmt lib via Git Submodule
- CI via Github Actions
- clang-format for code formatting
- Makefile with convenient commands

## Usage:
- Use `make build-debug` to build project
- Use `make tests` to run tests
- Use `make dist-clean` to clean CMake build directories
- Use `make format` to code formatting
- `make run` - combination of `make build-debug` and running a binary file
- `make clean-run` - combination of `make dist-clean` and `make run`
