#include "libftprintf.h"

t_args ft_print_string(char *str, t_args strct)
{
	int i;

	i = 0;
	if(!(str))
		str = "(null)";
	if(strct.accuracy > 0 && ((int)ft_strlen(str) > strct.accuracy))
		strct.width -= strct.accuracy;
	else if(strct.acc_fl <= 1)
		strct.width -= ft_strlen(str);
	while (strct.zero && strct.width > 0 && strct.width--)
	{
		ft_putchar_fd('0', 1);
		strct.retval++;
	}
	while (!(strct.minus) && strct.width > 0 && strct.width--)
	{
		ft_putchar_fd(' ', 1);
		strct.retval++;
	}
	if(!(strct.acc_fl))
	{
		ft_putstr_fd(str, 1);
		strct.retval += ft_strlen(str);
	}
	else
		while(strct.accuracy && str[i] && strct.accuracy--)
		{
			ft_putchar_fd(str[i++], 1);
			strct.retval++;
		}
	while (strct.minus && strct.width > 0 && strct.width--)
	{
		ft_putchar_fd(' ', 1);
		strct.retval++;
	}
	return (strct);
}

void ft_print_x(int c, t_args strct)
{
	int d;
	int i;

	d = c;
	i = 1;
	while((c / 16) > 0 && i++)
		c = c / 16;
	char str[i];
	strct.width -= i;
	strct.accuracy -= i;
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
	while (strct.acc_fl && strct.accuracy >= 0 && strct.accuracy--)
		ft_putchar_fd('0', 1);
	if(strct.zero)
		while (strct.zero && strct.width >= 0 && strct.width--)
			ft_putchar_fd('0', 1);
	else
		while (!(strct.minus) && strct.width >= 0 && strct.width--)
			ft_putchar_fd(' ', 1);
	ft_putstr_fd(str, 1);
	while (strct.minus && strct.width >= 0 && strct.width--)
		ft_putchar_fd(' ', 1);
}

void ft_print_X(int c, t_args strct)
{
	int d;
	int i;

	d = c;
	i = 1;
	while((c / 16) > 0 && i++)
		c = c / 16;
	char str[i];
	strct.width -= i;
	strct.accuracy -= i;
	i--;
	while (i >= 0)
	{
		if(d % 16 < 10)
			str[i] = (d % 16) + 48;
		else
			str[i] = (d % 16) + 55;
		i--;
		d = d / 16;
	}
	while (strct.acc_fl && strct.accuracy >= 0 && strct.accuracy--)
		ft_putchar_fd('0', 1);
	if(strct.zero)
		while (strct.zero && strct.width >= 0 && strct.width--)
			ft_putchar_fd('0', 1);
	else
		while (!(strct.minus) && strct.width >= 0 && strct.width--)
			ft_putchar_fd(' ', 1);
	ft_putstr_fd(str, 1);
	while (strct.minus && strct.width >= 0 && strct.width--)
		ft_putchar_fd(' ', 1);
}

t_args ft_print_perc(t_args strct)
{
	strct.width -= 1;
	if(strct.zero)
		while (strct.zero && strct.width >= 0 && strct.width--)
		{
			ft_putchar_fd('0', 1);
			strct.retval++;
		}
	while (!(strct.minus) && strct.width >= 0 && strct.width--)
	{
		ft_putchar_fd(' ', 1);
		strct.retval++;
	}
	write(1, "%", 1);
	strct.retval++;
	while (strct.minus && strct.width >= 0 && strct.width--)
	{
		ft_putchar_fd(' ', 1);
		strct.retval++;
	}
	return (strct);
}

