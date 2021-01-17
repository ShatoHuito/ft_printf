#include "libftprintf.h"

t_args ft_print_char(int c, t_args sct)
{
	while (!(sct.minus) && sct.width > 1 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	write(1, &c, 1);
	sct.retval++;
	while (sct.minus && sct.width > 1 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

t_args ft_print_p(unsigned long long int c, t_args sct)
{
	unsigned long long int d;
	int i;

	d = c;
	i = 1;
	if (c == 0 && sct.acc_fl && sct.acc == 0)
		i = 0;
	while((c / 16) > 0 && i++)
		c = c / 16;
	sct.retval = sct.retval + 2 + i;
	if (sct.acc && sct.width > sct.acc && sct.acc > i)
		sct.width = sct.width - (sct.acc - i);
	if (sct.width > 0)
		sct.width -= (i + 2);
	if (sct.acc > 0)
		sct.acc -= i;
	char str[i + 1];
	str[i] = '\0';
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
	if (sct.zero && !(sct.acc_fl))
		while (sct.zero && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd('0', 1);
	else
		while (!(sct.minus) && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd(' ', 1);
	ft_putstr_fd("0x", 1);
	if (sct.acc > 0)
		while (sct.acc >= 0 && sct.acc-- && sct.retval++)
			ft_putchar_fd('0', 1);

	if (!(c == 0 && sct.acc_fl && sct.acc == 0))
		ft_putstr_fd(str, 1);
	while (sct.minus && sct.width >= 0 && sct.width-- && sct.retval++)
		ft_putchar_fd(' ', 1);
	//if (sct.acc_fl && c == 0 && sct.acc == 0 && sct.retval != 0)
		//ft_putchar_fd(' ', 1);
	return (sct);
}


t_args 	putnbr_u(unsigned int n, int fd, t_args sct)
{
	char c;

	if (n / 10)
		putnbr_u(n / 10, fd, sct);
	c = n % 10 + 48;
	if(sct.acc || n != 0 || !(sct.acc_fl))
		write(fd, &c, 1);
	return (sct);
}

t_args ft_print_u(unsigned int c, t_args sct)
{
	int i;
	unsigned int A;

	A = c;
	i = 1;

	if(c != 0 || !(sct.acc_fl))
		sct.retval++;
	while ((A = A / 10) > 0 && sct.retval++)
		i++;

	if(sct.acc && sct.width > sct.acc && sct.acc > i)
		sct.width = sct.width - (sct.acc - i);
	if(sct.width > 0)
		sct.width -= i;
	if(sct.acc > 0)
		sct.acc -= i;
	if(sct.zero && !(sct.acc_fl))
		while (sct.zero && sct.width >= 0 && sct.width--)
		{
			ft_putchar_fd('0', 1);
			sct.retval++;
		}
	else
		while (!(sct.minus) && sct.width >= 0 && sct.width--)
		{
			ft_putchar_fd(' ', 1);
			sct.retval++;
		}
	if(sct.acc > 0)
		while (sct.acc >= 0 && sct.acc--)
		{
			ft_putchar_fd('0', 1);
			sct.retval++;
		}
	sct = putnbr_u(c, 1, sct);
	while (sct.minus && sct.width >= 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	if(sct.acc_fl && c == 0 && sct.acc != 0)
		sct.retval++;
	if(sct.acc_fl && c == 0 && sct.acc == 0 && sct.retval != 0)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}


