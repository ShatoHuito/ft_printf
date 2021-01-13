#include "libftprintf.h"

t_args ft_printf_d1(int c, int minus, t_args strct)
{
	int i;

	if(c != 0 || !(strct.acc_fl))
		i = 1;
	else
		i = 0;
	while ((c = c / 10) > 0 && strct.retval++)
		i++;
	if(strct.accuracy && strct.width > strct.accuracy && strct.accuracy > i)
		strct.width = strct.width - (strct.accuracy - i);
	if(strct.zero == 0 && minus == 1 && strct.acc_fl == 0)
		i++;
	if(strct.width > 0)
		strct.width -= i;
	if(strct.accuracy > 0)
		strct.accuracy -= i;
	if (minus == 1 && strct.acc_fl && strct.width == 0)
	{
		ft_putchar_fd('-', 1);
		strct.pr_minus_fl = 1;
	}
	return (strct);
}

t_args ft_printf_d2(int minus, t_args strct)
{
	if(strct.zero && !(strct.acc_fl))
	{
		if (minus == 1)
		{
			ft_putchar_fd('-', 1);
			strct.width--;
		}
		while (strct.zero && strct.width >= 0 && strct.width--)
		{
			ft_putchar_fd('0', 1);
			strct.retval++;
		}
	}
	else
	{
		if ((minus == 1 && strct.acc_fl) && strct.accuracy)
			strct.width--;
		while (!(strct.minus) && strct.width >= 0 && strct.width--)
		{
			ft_putchar_fd(' ', 1);
			strct.retval++;
		}
		if (minus == 1 && strct.pr_minus_fl != 1)
			ft_putchar_fd('-', 1);
	}
	return (strct);
}

t_args ft_print_d(int c, t_args strct)
{
	int minus;

	minus = 0;
	if(c != 0 || !(strct.acc_fl))
		strct.retval++;
	if(c < 0 && strct.retval++)
	{
		c = c * -1;
		minus = 1;
	}
	strct = ft_printf_d1(c, minus, strct);
	strct = ft_printf_d2(minus, strct);

	while (strct.acc_fl && strct.accuracy > 0 && strct.accuracy--) //del >=
	{
		ft_putchar_fd('0', 1);
		strct.retval++;
	}
	if(strct.accuracy || c != 0 || !(strct.acc_fl))
		ft_putnbr_fd(c, 1);
	while (strct.minus && strct.width >= 0 && strct.width--)
	{
		ft_putchar_fd(' ', 1);
		strct.retval++;
	}
	return (strct);
}

