#include "libftprintf.h"

//t_args ft_print_x(unsigned int c, t_args sct)
//{
//	unsigned int d;
//	int i;
//
//	d = c;
//	i = 1;
//	if(c == 0 && sct.acc_fl && sct.acc == 0 && sct.width == 0)
//		i = 0;
//	while((c / 16) > 0 && i++)
//		c = c / 16;
//	char str[i + 1];
//	str[i] = '\0';
//	sct.retval = sct.retval + i;
//	if(sct.acc && sct.width > sct.acc && sct.acc > i)
//		sct.width = sct.width - (sct.acc - i);
//	if(sct.width > 0)
//		sct.width -= i;
//	if(sct.acc > 0)
//		sct.acc -= i;
//	i--;
//	while (i >= 0)
//	{
//		if(d % 16 < 10)
//			str[i] = (d % 16) + 48;
//		else
//			str[i] = (d % 16) + 87;
//		i--;
//		d = d / 16;
//	}
//	if(sct.zero && !(sct.acc_fl))
//		while (sct.zero && sct.width >= 0 && sct.width-- && sct.retval++)
//			ft_putchar_fd('0', 1);
//	else
//		while (!(sct.minus) && sct.width >= 0 && sct.width-- && sct.retval++)
//			ft_putchar_fd(' ', 1);
//	if(sct.acc > 0)
//		while (sct.acc >= 0 && sct.acc-- && sct.retval++)
//			ft_putchar_fd('0', 1);
//	if(!(c == 0 && sct.acc_fl && sct.acc == 0))
//		ft_putstr_fd(str, 1);
//	while (sct.minus && sct.width >= 0 && sct.width-- && sct.retval++)
//		ft_putchar_fd(' ', 1);
//	if(sct.acc_fl && c == 0 && sct.acc == 0 && sct.retval != 0)
//		ft_putchar_fd(' ', 1);
//	return (sct);
//}

t_args 	putnbr_x(unsigned int n, t_args sct, int len)
{
	char str[len + 1];

	str[len] = '\0';
	len--;
	while (len >= 0 && sct.type == 'x')
	{
		if(n % 16 < 10)
			str[len] = (n % 16) + 48;
		else
			str[len] = (n % 16) + 87;
		len--;
		n = n / 16;
	}
	while (len >= 0 && sct.type == 'X')
	{
		if(n % 16 < 10)
			str[len] = (n % 16) + 48;
		else
			str[len] = (n % 16) + 55;
		len--;
		n = n / 16;
	}

	ft_putstr_fd(str, 1);

	return (sct);
}

int x_len(unsigned int c, t_args sct)
{
	int len;

	len = 1;

	if(c == 0 && sct.acc_fl)
		len = 0;
	if(c == 0 && sct.acc_fl && sct.flag2)
		len = 1;
	while((c / 16) > 0 && len++)
		c = c / 16;


	return (len);
}

t_args 	ft_ptnbr_mod_x(unsigned int c, t_args sct, int len)
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
		sct = putnbr_x(c, sct, len);
	sct.retval = sct.retval + len;
	return (sct);
}

t_args width_more_len_x(unsigned int c, t_args sct, int len)
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
	sct = ft_ptnbr_mod_x(c, sct, len);
	while (sct.minus && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

t_args width_les_len_x(unsigned int c, t_args sct, int len)
{
	if(sct.zero && !(sct.acc_fl))
	{
		while(sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	sct = ft_ptnbr_mod_x(c, sct, len);
	return (sct);
}

t_args width_inic_x(unsigned int c, t_args sct, int len)
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

t_args ft_print_x(unsigned int c, t_args sct)
{
	int len;

	len = x_len(c, sct);

	if(sct.width > len)
		sct = width_more_len_x(c, width_inic_x(c, sct, len), len);
	else
		sct = width_les_len_x(c, width_inic_x(c, sct, len), len);
	return (sct);
}

t_args ft_print_X(unsigned int c, t_args sct)
{
	int len;

	len = x_len(c, sct);
	if(sct.spcasefl)
		return (sct);
	if(sct.width > len)
		sct = width_more_len_x(c, width_inic_x(c, sct, len), len);
	else
		sct = width_les_len_x(c, width_inic_x(c, sct, len), len);
	return (sct);
}
