#include "libftprintf.h"

t_args 	ft_ptnbr_mod(int c, t_args sct, int len)
{
	if(c == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		sct.retval = sct.retval + 11;
		return (sct);
	}
	if (c < 0)
	{
		ft_putchar_fd('-', 1);
		c = c * -1;
		sct.retval++;
	}
	while (sct.acc > len)
	{
		ft_putnbr_fd(0, 1);
		sct.acc--;
		sct.retval++;
	}
	if(len)
		ft_putnbr_fd(c, 1);
	sct.retval = sct.retval + len;
	return (sct);
}

t_args width_more_len(int c, t_args sct, int len)
{
	if(sct.zero && !(sct.acc_fl))
	{
		if(c < 0)
		{
			ft_putchar_fd('-', 1);
			c = c * -1;
			sct.retval++;
		}
		while(sct.width > 0 && sct.width--)
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
	sct = ft_ptnbr_mod(c, sct, len);
	while (sct.minus && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

t_args width_les_len(int c, t_args sct, int len)
{
	if(sct.zero && !(sct.acc_fl))
	{
		if(c < 0 && c != -2147483648)
		{
			ft_putchar_fd('-', 1);
			c = c * -1;
			sct.retval++;
		}
		while(sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	sct = ft_ptnbr_mod(c, sct, len);
	return (sct);
}

//t_args ft_printf_d2(int minus, t_args sct)
//{
//	if(sct.zero)
//	{
//		if (minus == 1)
//		{
//			ft_putchar_fd('-', 1);
//			sct.width--;
//		}
//		while (sct.zero && sct.width >= 0 && sct.width--)
//		{
//			ft_putchar_fd('0', 1);
//			sct.retval++;
//		}
//	}
//	else
//	{
//		if ((minus == 1 && sct.acc_fl) && sct.acc)
//			sct.width--;
//		while (!(sct.minus) && sct.width >= 0 && sct.width--)
//		{
//			ft_putchar_fd(' ', 1);
//			sct.retval++;
//		}
//		if (minus == 1 && sct.pr_minus_fl != 1)
//			ft_putchar_fd('-', 1);
//	}
//	return (sct);
//}

int dec_len(int c, t_args sct)
{
	int len;

	if(c == -2147483648)
	{
		len = 10;
		return (len);
	}
	len = 1;
	if(c < 0)
		c = c * -1;
	if(c == 0 && sct.acc_fl)
		len = 0;
	while((c = c / 10) > 0)
		len++;


	return (len);
}

t_args width_inic(int c, t_args sct, int len)
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

t_args ft_print_d(int c, t_args sct)
{
	int len;

	len = dec_len(c, sct);
	if(sct.width > len)
		sct = width_more_len(c, width_inic(c, sct, len), len);
	else
		sct = width_les_len(c, width_inic(c, sct, len), len);
	return (sct);
}