# Simple C++17 project template

## Features:
- C++ sources and headers directories building via CMake
- Google Tests via FetchContent
- fmt lib via Git Submodule
- CI via Github Actions
- clang-format for code formatting
- Makefile with convenient commands

## Usage:
- Use `make build-(debug/release)` to produce (debug/release) build
- Use `make run-(debug/release)` to build and instantly run a binary
- Use `make tests` to run tests with debug build
- Use `make dist-clean` to clean build directories
- Use `make format` to code formatting
