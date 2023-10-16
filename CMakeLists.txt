cmake_minimum_required(VERSION 3.15)
project(
    Greeter
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(core)
# add_subdirectory(third_party/function2)

# set(THIRD_PARTY_LIBS "function2")

add_executable(
    ${PROJECT_NAME} main.cpp
)
target_link_libraries(
    ${PROJECT_NAME} ${PROJECT_NAME}_objs
)

target_compile_options(
    ${PROJECT_NAME} PRIVATE -fsanitize=address
)
target_link_options(
    ${PROJECT_NAME} PRIVATE -fsanitize=address
)

target_compile_features(
    ${PROJECT_NAME} PRIVATE cxx_std_17
)
target_compile_options(
    ${PROJECT_NAME} PRIVATE "-Wall" "-Wextra" "-Wpedantic"
)

include(FetchContent)
include(CTest)

add_subdirectory(test)
