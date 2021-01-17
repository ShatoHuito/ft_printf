#include "libftprintf.h"

t_args ft_printf_d1(int c, int minus, t_args sct)
{
	int i;

	if(c != 0 || !(sct.acc_fl))
		i = 1;
	else
		i = 0;
	if(c == -2147483648)
		i = i + 9;
	while ((c = c / 10) > 0 && sct.retval++)
		i++;

	if(sct.acc && sct.acc > i) // del sct.width > sct.acc
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

t_args 	ft_ptnbr_mod(int n, int fd, t_args sct)
{
	char c;

	if (n == -2147483648)
	{
		ft_putstr_fd("2147483648", fd);
		sct.retval = sct.retval + 9;
		return (sct);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n / 10)
			ft_putnbr_fd(n / 10, fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
	if(!(n) && !(sct.zero) && sct.acc_fl && !(sct.flag2))
		sct.retval++;
	if(!(n) && sct.acc_fl && sct.flag2)
		sct.retval++;
	if(!(n) && !(sct.zero) && sct.acc_fl && sct.flag1)
		sct.width--;
	if(!(n) && !(sct.zero) && sct.acc_fl && sct.flag2 && !(sct.flag1))
		sct.width--;
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

	while (sct.acc_fl && sct.acc > 0 && !(sct.flag2) && sct.acc--) //del >=
	{
		ft_putchar_fd('0', 1);
		sct.retval++;
	}
	if(sct.acc || c != 0 || !(sct.acc_fl))
		sct = ft_ptnbr_mod(c, 1, sct);
	while (sct.minus && sct.width >= 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

