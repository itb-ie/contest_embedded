cmake_minimum_required(VERSION 3.26)
project(contest C)

set(CMAKE_C_STANDARD 11)

add_executable(contest generate.c
                tree.h tree.c)
