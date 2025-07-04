cmake_minimum_required(VERSION 3.31)
project(windowc C CXX)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/SDL)
add_subdirectory(lib/cimgui)

add_executable(game
        src/main.c
        src/imgui.c
        ext/imgui_backend_sdl.cpp)

target_link_libraries(game PRIVATE SDL2 SDL2main cimgui "-framework OpenGL" "-framework GLUT" "-framework OpenCL")

target_compile_definitions(game PRIVATE SOKOL_GLCORE33)

target_include_directories(game PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/sokol
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/sokol_gp
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/cimgui
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/cimgui/imgui/backends
)