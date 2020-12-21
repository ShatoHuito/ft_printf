#include "ft_printf.h"

void ft_print_char(int c)
{
	write(1, &c, 1);
}

