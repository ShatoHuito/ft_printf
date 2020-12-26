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

void ft_print_d(int c, t_args strct)
{
	int i;
	int A;

	A = c;
	i = 1;
	while ((A = A / 10) > 0)
		i++;

	strct.width -= i;
	strct.accuracy -= i;
	while (strct.acc_fl && strct.accuracy >= 0 && strct.accuracy--)
		ft_putchar_fd('0', 1);
	if(strct.zero)
		while (strct.zero && strct.width >= 0 && strct.width--)
			ft_putchar_fd('0', 1);
	else
		while (!(strct.minus) && strct.width >= 0 && strct.width--)
			ft_putchar_fd(' ', 1);
	ft_putnbr_fd(c, 1);
	while (strct.minus && strct.width >= 0 && strct.width--)
		ft_putchar_fd(' ', 1);
}

void	putnbr_u(unsigned int n, int fd)
{
	char c;

	if (n / 10)
		putnbr_u(n / 10, fd);
	c = n % 10 + 48;
	write(fd, &c, 1);
}

void ft_print_u(unsigned int c, t_args strct)
{
	int i;
	unsigned int A;

	A = c;
	i = 1;
	while ((A = A / 10) > 0)
		i++;

	strct.width -= i;
	strct.accuracy -= i;
	while (strct.acc_fl && strct.accuracy >= 0 && strct.accuracy--)
		ft_putchar_fd('0', 1);
	if(strct.zero)
		while (strct.zero && strct.width >= 0 && strct.width--)
			ft_putchar_fd('0', 1);
	else
		while (!(strct.minus) && strct.width >= 0 && strct.width--)
			ft_putchar_fd(' ', 1);
	putnbr_u(c, 1);
	while (strct.minus && strct.width >= 0 && strct.width--)
		ft_putchar_fd(' ', 1);
}


