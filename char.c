#include "libftprintf.h"

void ft_print_char(int c, t_args strct)
{
	while (!(strct.minus) && strct.width > 1 && strct.width--)
		ft_putchar_fd(' ', 1);
	write(1, &c, 1);
	while (strct.minus && strct.width > 1 && strct.width--)
		ft_putchar_fd(' ', 1);
}

void ft_print_p(unsigned long long int c)
{
	unsigned long long int d;
	int i;

	d = c;
	i = 1;
	while((c / 16) > 0 && i++)
		c = c / 16;
	char str[i];
	i--;
	while (i >= 0)
	{
		if(d % 16 < 10)
			str[i] = (d % 16) + 48;
		else
			str[i] = (d % 16) + 87;
		i--;
		d = d / 16;
	}
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(str, 1);
}


t_args 	putnbr_u(unsigned int n, int fd, t_args strct)
{
	char c;

	if (n / 10)
		putnbr_u(n / 10, fd, strct);
	c = n % 10 + 48;
	if(strct.accuracy || n != 0 || !(strct.acc_fl))
		write(fd, &c, 1);
	//if(n == 0 && strct.acc_fl)
		//strct.retval++;
	return (strct);
}

t_args ft_print_u(unsigned int c, t_args strct)
{
	int i;
	unsigned int A;

	A = c;
	i = 1;

	if(c != 0 || !(strct.acc_fl))
		strct.retval++;
	while ((A = A / 10) > 0 && strct.retval++)
		i++;

	if(strct.accuracy && strct.width > strct.accuracy && strct.accuracy > i)
		strct.width = strct.width - (strct.accuracy - i);
	if(strct.width > 0)
		strct.width -= i;
	if(strct.accuracy > 0)
		strct.accuracy -= i;
	if(strct.zero && !(strct.acc_fl))
		while (strct.zero && strct.width >= 0 && strct.width--)
		{
			ft_putchar_fd('0', 1);
			strct.retval++;
		}
	else
		while (!(strct.minus) && strct.width >= 0 && strct.width--)
		{
			ft_putchar_fd(' ', 1);
			strct.retval++;
		}
	if(strct.accuracy > 0)
		while (strct.accuracy >= 0 && strct.accuracy--)
		{
			ft_putchar_fd('0', 1);
			strct.retval++;
		}
	strct = putnbr_u(c, 1, strct);
	while (strct.minus && strct.width >= 0 && strct.width--)
	{
		ft_putchar_fd(' ', 1);
		strct.retval++;
	}
	return (strct);
}


