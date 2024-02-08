# Release cmake configuration
build_release/Makefile:
	@git submodule update --init
	@mkdir -p build_release
	@cd build_release && cmake -DCMAKE_BUILD_TYPE=Release ..

# Debug cmake configuration
build_debug/Makefile:
	@git submodule update --init
	@mkdir -p build_debug
	@cd build_debug && cmake -DCMAKE_BUILD_TYPE=Debug -DASAN_ENABLED=True ..

# Run cmake configuration
.PHONY: cmake-debug cmake-release
cmake-debug cmake-release: cmake-%: build_%/Makefile

# Build using cmake
.PHONY: build-debug build-release
build-debug build-release: build-%: cmake-%
	@cmake --build build_$* -j $(shell nproc)

# Run
.PHONY: run-debug run-release
run-debug run-release: run-%: build-%
	@./build_$*/Greeter

# Run with `clean` step
.PHONY: clean-run-debug clean-run-release
clean-run-debug clean-run-release: clean-run-%: clean
	@make run-$*

# Cleanup data
.PHONY: clean
clean:
	@rm -rf build_*

# Format the sources
.PHONY: format
format:
	@find core -name '*pp' -type f | xargs clang-format -i
	@find test -name '*pp' -type f | xargs clang-format -i

# Run tests in debug
.PHONY: tests
tests: build-debug
	@cd build_debug && ctest -V
