if (CMAKE_BUILD_TYPE MATCHES "Debug")
    set(DebugCompilerFlags -Wall -Wextra -Wpedantic -g)
    message(STATUS "Target compiler flags are: ${DebugCompilerFlags}")
    add_compile_options(${DebugCompilerFlags})
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
