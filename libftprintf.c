#include "libftprintf.h"
#include <stdio.h>


t_args ft_sct_inicial(void)
{
	t_args sct;
	sct.zero = 0;
	sct.retval = 0;
	sct.minus = 0;
	sct.type = 0;
	sct.acc = 0;
	sct.acc_fl = 0;
	sct.width = 0;
	sct.pr_minus_fl = 0;
	sct.flag1 = 0;
	sct.flag2 = 0;
	sct.flag3 = 0;
	sct.spcasefl = 0;

	return (sct);
}

t_args ft_sct_zero(t_args sct)
{
	sct.zero = 0;
	sct.minus = 0;
	sct.type = 0;
	sct.acc = 0;
	sct.acc_fl = 0;
	sct.width = 0;
	sct.pr_minus_fl = 0;
	sct.flag1 = 0;
	sct.flag2 = 0;
	sct.flag3 = 0;
	sct.spcasefl = 0;

	return (sct);
}

t_args flag_inicial(t_args sct, const char *inpt)
{
	char *flags;

	flags = "-0";
	sct.i++;
	while(ft_strchr(flags, inpt[sct.i]))
	{
		if(inpt[sct.i] == '-')
			sct.minus = 1;
		if(inpt[sct.i++] == '0' && sct.minus == 0)
			sct.zero = 1;
	}
	return (sct);
}

t_args width_inicial(t_args sct, const char *inpt, va_list args)
{
	if(inpt[sct.i] == '*')
	{
		sct.width = va_arg(args, int);
		sct.i++;
	}
	else
		while(ft_isdigit(inpt[sct.i]))
		{
			sct.width = sct.width * 10 + (inpt[sct.i] - 48);
			sct.i++;
		}
	if(sct.width < 0)
	{
		sct.minus = 1;
		sct.zero = 0;
		sct.width = sct.width * -1;
		sct.flag1 = 1;
	}
	return (sct);
}

t_args accuracy_inicial (t_args sct, const char *inpt, va_list args)
{
	if(inpt[sct.i] == '.')
	{
		sct.acc_fl = 1;
		sct.i++;
		if(inpt[sct.i] != '*' && !(ft_isdigit(inpt[sct.i])))
			sct.acc_fl = 2;
		if(inpt[sct.i] == '*')
		{
			sct.acc = va_arg(args, int);
			sct.i++;
		}
		else
			while (ft_isdigit(inpt[sct.i]))
			{
				sct.acc = sct.acc * 10 + (inpt[sct.i] - 48);
				sct.i++;
			}
	}
	if(sct.acc_fl && !(sct.acc))
		sct.flag3 = 1;
	if(sct.acc < 0)
	{
		sct.acc = 0;
		sct.flag2 = 1;
		sct.acc_fl = 0;
	}
	return (sct);
}

t_args type_inicial (t_args sct, const char *inpt)
{
	char *types;

	types = "cspdiuxX%";
	if(ft_strchr(types, inpt[sct.i]) == NULL)
		return (sct);
	else
		sct.type = *ft_strchr(types, inpt[sct.i]);
	sct.i++;
	return (sct);
}

t_args print_inicial(t_args sct, va_list args)
{
	if(sct.type == 0)
	{
		sct.type = -1;
		return (sct);
	}
	if(sct.type == 'c')
		sct = ft_print_char(va_arg(args, int), sct);
	if(sct.type == 's')
		sct = ft_print_string(va_arg(args, char *), sct);
	if(sct.type == 'p')
		sct = ft_print_p(va_arg(args, unsigned long long int), sct);
	if(sct.type == 'd')
		sct = ft_print_d(va_arg(args, int), sct);
	if(sct.type == 'i')
		sct = ft_print_d(va_arg(args, int), sct);
	if(sct.type == 'u')
		sct = ft_print_u(va_arg(args, unsigned int), sct);
	if(sct.type == 'x')
		sct = ft_print_x(va_arg(args, unsigned int), sct);
	if(sct.type == 'X')
		sct = ft_print_X(va_arg(args, unsigned int), sct);
	if(sct.type == '%')
		sct = ft_print_perc(sct);
	return (sct);
}

t_args primary_inicial(const char *inpt, t_args sct, va_list args)
{
	sct.i = 0;
	
	while (sct.i < (int)ft_strlen(inpt) && sct.type != -1)
	{
		while (inpt[sct.i] != '%' && inpt[sct.i] && sct.type != -1)
		{
			ft_putchar_fd(inpt[sct.i++], 1);
			sct.retval++;
		}
		sct = ft_sct_zero(sct);
		if(sct.i < (int)ft_strlen(inpt))
		{
			sct = flag_inicial(sct, inpt);
			sct = width_inicial(sct, inpt, args);
			sct = accuracy_inicial(sct, inpt, args);
			sct = type_inicial(sct, inpt);
			sct = print_inicial(sct, args);
		}
	}
	return (sct);
}

int ft_printf(const char *inpt, ...)
{
	t_args sct;
	va_list args;

	va_start(args, inpt);
	sct = ft_sct_inicial();
	sct = primary_inicial(inpt, sct, args);
	return (sct.retval);
}

/*int main()
{
	int     a = -2;
	int     b = 1;
	char    c = 'a';
	int     d = 2147483647;
	int     e = -2147483648;
	int     f = 42;
	int     g = 25;
	int     h = 4200;
	int     i = 8;
	int     j = -12;
	int     k = 123456789;
	int     l = 0;
	int     m = -12345678;
	char    *n = "abcdefghijklmnop";
	char    *o = "-a";
	char    *p = "-12";
	char    *q = "0";
	char    *r = "%%";
	char    *s = "-2147483648";
	char    *t = "0x12345678";
	char    *u = "-0";
	char *s_hidden = "hi low";

	printf("%09s", s_hidden);
	printf("\n");
	a = ft_printf("%09s", s_hidden);
	printf("\n%d", a);


	return 0;
}*/