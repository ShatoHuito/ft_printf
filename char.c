#include "ft_printf.h"

void ft_print_char(int c, t_args strct)
{
	while (!(strct.minus) && strct.width > 1 && strct.width--)
		ft_putchar_fd(' ', 1);
	write(1, &c, 1);
	while (strct.minus && strct.width > 1 && strct.width--)
		ft_putchar_fd(' ', 1);
}

