#include "libftprintf.h"

t_args ft_printf_d1(int c, int minus, t_args sct)
{
	int i;

	if(c != 0 || !(sct.acc_fl))
		i = 1;
	else
		i = 0;
	while ((c = c / 10) > 0 && sct.retval++)
		i++;
	if(sct.acc && sct.width > sct.acc && sct.acc > i)
		sct.width = sct.width - (sct.acc - i);
	if(sct.zero == 0 && minus == 1 && sct.acc_fl == 0)
		i++;
	if(sct.width > 0)
		sct.width -= i;
	if(sct.acc > 0)
		sct.acc -= i;
	if (minus == 1 && sct.acc_fl && sct.width == 0)
	{
		ft_putchar_fd('-', 1);
		sct.pr_minus_fl = 1;
	}
	return (sct);
}

t_args ft_printf_d2(int minus, t_args sct)
{
	if(sct.zero && !(sct.acc_fl))
	{
		if (minus == 1)
		{
			ft_putchar_fd('-', 1);
			sct.width--;
		}
		while (sct.zero && sct.width >= 0 && sct.width--)
		{
			ft_putchar_fd('0', 1);
			sct.retval++;
		}
	}
	else
	{
		if ((minus == 1 && sct.acc_fl) && sct.acc)
			sct.width--;
		while (!(sct.minus) && sct.width >= 0 && sct.width--)
		{
			ft_putchar_fd(' ', 1);
			sct.retval++;
		}
		if (minus == 1 && sct.pr_minus_fl != 1)
			ft_putchar_fd('-', 1);
	}
	return (sct);
}

t_args ft_print_d(int c, t_args sct)
{
	int minus;

	minus = 0;
	if(c != 0 || !(sct.acc_fl))
		sct.retval++;
	if(c < 0 && sct.retval++)
	{
		c = c * -1;
		minus = 1;
	}
	sct = ft_printf_d1(c, minus, sct);
	sct = ft_printf_d2(minus, sct);

	while (sct.acc_fl && sct.acc > 0 && sct.acc--) //del >=
	{
		ft_putchar_fd('0', 1);
		sct.retval++;
	}
	if(sct.acc || c != 0 || !(sct.acc_fl))
		ft_putnbr_fd(c, 1);
	while (sct.minus && sct.width >= 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

