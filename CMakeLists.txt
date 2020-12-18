cmake_minimum_required(VERSION 3.17)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf ft_printf.c ft_printf.h char.c)