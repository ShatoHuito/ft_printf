#include "ft_printf.h"

void ft_print_string(char *str, t_args strct)
{
	int i;

	i = 0;
	strct.width -= ft_strlen(str);
	while (!(strct.minus) && strct.width > 0 && strct.width--)
		ft_putchar_fd(' ', 1);
	if(!(strct.accuracy_flag))
		ft_putstr_fd(str, 1);
	else
		while(strct.accuracy && strct.accuracy--)
			ft_putchar_fd(str[i++], 1);
	while (strct.minus && strct.width > 0 && strct.width--)
		ft_putchar_fd(' ', 1);
}

