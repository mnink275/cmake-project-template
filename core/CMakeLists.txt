file(
    GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp
)
file(
    GLOB HEADERS ${CMAKE_CURRENT_LIST_DIR}/include/*.hpp
)

add_library(
    ${PROJECT_NAME}_objs OBJECT ${SOURCES} ${HEADERS}
)
target_include_directories(
    ${PROJECT_NAME}_objs PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include
)
target_link_libraries(
    ${PROJECT_NAME}_objs fmt
)
