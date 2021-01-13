cmake_minimum_required(VERSION 3.17)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf libftprintf.c libftprintf.h char.c libft/ft_putchar_fd.c
        libft/ft_strchr.c libft/ft_isdigit.c libft/ft_putstr_fd.c string.c
        libft/ft_strlen.c libft/ft_putnbr_fd.c libft/ft_itoa.c
        libft/ft_strdup.c libft/ft_strcpy.c int_dec.c)