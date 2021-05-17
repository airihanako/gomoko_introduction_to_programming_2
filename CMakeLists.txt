cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(graphics graphics.cpp  button.hpp button.cpp checkbox.hpp checkbox.cpp textbox.cpp textbox.hpp widget.hpp widget.cpp titlescreen.hpp titlescreen.cpp gamescreen.hpp gamescreen.cpp board.hpp board.cpp endscreen.hpp endscreen.cpp gamemaster.hpp gamemaster.cpp)

include_directories(include)
link_directories(lib)

target_link_libraries( graphics SDL2 SDL2.dll SDL2main SDL2_ttf SDL2_ttf.dll)


add_executable(untitled main.cpp)
target_link_libraries( untitled graphics)
