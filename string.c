#include "libftprintf.h"

t_args ft_print_string(char *str, t_args sct)
{
	int i;

	i = 0;
	if(!(str))
		str = "(null)";
	if(sct.acc > 0 && ((int)ft_strlen(str) > sct.acc))
		sct.width -= sct.acc;
	else if(sct.acc_fl <= 1)
		sct.width -= ft_strlen(str);
	while (sct.zero && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd('0', 1);
		sct.retval++;
	}
	while (!(sct.minus) && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	if(!(sct.acc_fl) || sct.flag2)
	{
		ft_putstr_fd(str, 1);
		sct.retval += ft_strlen(str);
	}
	else
		while(sct.acc && str[i] && sct.acc--)
		{
			ft_putchar_fd(str[i++], 1);
			sct.retval++;
		}
	while (sct.minus && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}


t_args ft_print_x(unsigned int c, t_args sct)
{
	unsigned int d;
	int i;

	d = c;
	i = 1;
	if(c == 0 && sct.acc_fl && sct.acc == 0 && sct.width == 0)
		i = 0;
	while((c / 16) > 0 && i++)
		c = c / 16;
	char str[i + 1];
	str[i] = '\0';
	sct.retval = sct.retval + i;
	if(sct.acc && sct.width > sct.acc && sct.acc > i)
		sct.width = sct.width - (sct.acc - i);
	if(sct.width > 0)
		sct.width -= i;
	if(sct.acc > 0)
		sct.acc -= i;
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
	if(sct.zero && !(sct.acc_fl))
		while (sct.zero && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd('0', 1);
	else
		while (!(sct.minus) && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd(' ', 1);
	if(sct.acc > 0)
		while (sct.acc >= 0 && sct.acc-- && sct.retval++)
			ft_putchar_fd('0', 1);
	if(!(c == 0 && sct.acc_fl && sct.acc == 0))
		ft_putstr_fd(str, 1);
	while (sct.minus && sct.width >= 0 && sct.width-- && sct.retval++)
		ft_putchar_fd(' ', 1);
	if(sct.acc_fl && c == 0 && sct.acc == 0 && sct.retval != 0)
		ft_putchar_fd(' ', 1);
	return (sct);
}

t_args ft_print_X(unsigned int c, t_args sct)
{
	unsigned int d;
	int i;

	d = c;
	i = 1;
	if (c == 0 && sct.acc_fl && sct.acc == 0 && sct.width == 0)
		i = 0;
	while ((c / 16) > 0 && i++)
		c = c / 16;
	char str[i + 1];
	str[i] = '\0';
	sct.retval = sct.retval + i;
	if (sct.acc && sct.width > sct.acc && sct.acc > i)
		sct.width = sct.width - (sct.acc - i);
	if (sct.width > 0)
		sct.width -= i;
	if (sct.acc > 0)
		sct.acc -= i;
	i--;
	while (i >= 0)
	{
		if (d % 16 < 10)
			str[i] = (d % 16) + 48;
		else
			str[i] = (d % 16) + 55;
		i--;
		d = d / 16;
	}
	if (sct.zero && !(sct.acc_fl))
		while (sct.zero && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd('0', 1);
	else
		while (!(sct.minus) && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd(' ', 1);
	if (sct.acc > 0)
		while (sct.acc >= 0 && sct.acc-- && sct.retval++)
			ft_putchar_fd('0', 1);
	if (!(c == 0 && sct.acc_fl && sct.acc == 0))
		ft_putstr_fd(str, 1);
	while (sct.minus && sct.width >= 0 && sct.width-- && sct.retval++)
		ft_putchar_fd(' ', 1);
	if (sct.acc_fl && c == 0 && sct.acc == 0 && sct.retval != 0)
		ft_putchar_fd(' ', 1);
	return (sct);
}

t_args ft_print_perc(t_args sct)
{
	sct.width -= 1;
	if(sct.zero)
		while (sct.zero && sct.width >= 0 && sct.width--)
		{
			ft_putchar_fd('0', 1);
			sct.retval++;
		}
	while (!(sct.minus) && sct.width >= 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	write(1, "%", 1);
	sct.retval++;
	while (sct.minus && sct.width >= 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

