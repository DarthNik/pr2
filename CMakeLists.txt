cmake_minimum_required(VERSION 3.10)
project(Utility C)
set(CMAKE_C_STANDARD 99)
add_executable(program src/main.c src/users.c src/processes.c src/log.c src/error.c src/help.c src/users.h src/processes.h src/help.h src/log.h src/error.h)
