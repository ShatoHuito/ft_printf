#include "libftprintf.h"

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

int u_len(unsigned int c, t_args sct)
{
	int len;

	len = 1;
	if(c < 0)
		c = c * -1;
	if(c == 0 && sct.acc_fl)
		len = 0;
	if(c == 0 && sct.acc_fl && sct.flag2)
		len = 1;
	while((c = c / 10) > 0)
		len++;


	return (len);
}

t_args 	ft_ptnbr_mod_u(unsigned int c, t_args sct, int len)
{

	while (sct.acc > len)
	{
		ft_putnbr_fd(0, 1);
		sct.acc--;
		sct.retval++;
	}
//	if(c == 0 && sct.flag3 && sct.width)
//	{
//		ft_putchar_fd(' ', 1);
//		sct.retval++;
//	}
	if(len)
		sct = putnbr_u(c, 1, sct);
	sct.retval = sct.retval + len;
	return (sct);
}

t_args width_more_len_u(unsigned int c, t_args sct, int len)
{
	if(sct.zero && !(sct.acc) && !(sct.acc_fl))
	{
		while(!(sct.flag3) && sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	while (!(sct.minus) && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	sct = ft_ptnbr_mod_u(c, sct, len);
	while (sct.minus && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

t_args width_les_len_u(unsigned int c, t_args sct, int len)
{
	if(sct.zero && !(sct.acc_fl))
	{
		while(sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	sct = ft_ptnbr_mod_u(c, sct, len);
	return (sct);
}

t_args width_inic_u(unsigned int c, t_args sct, int len)
{
	if (c >= 0)
	{
		if (len > sct.acc)
			sct.width = sct.width - len;
		else
			sct.width = sct.width - sct.acc;
	}
	else
	{
		if (len > sct.acc)
			sct.width = sct.width - len - 1;
		else
			sct.width = sct.width - sct.acc - 1;
	}
	return (sct);
}

t_args ft_print_u(unsigned int c, t_args sct)
{
	int len;

	len = u_len(c, sct);

	if(sct.width > len)
		sct = width_more_len_u(c, width_inic_u(c, sct, len), len);
	else
		sct = width_les_len_u(c, width_inic_u(c, sct, len), len);
	return (sct);
}

