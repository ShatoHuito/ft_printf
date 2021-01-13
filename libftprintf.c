#include "libftprintf.h"
#include <stdio.h>


t_args ft_strct_inicial(void)
{
	t_args strct;
	strct.zero = 0;
	strct.retval = 0;
	strct.minus = 0;
	strct.type = 0;
	strct.accuracy = 0;
	strct.acc_fl = 0;
	strct.width = 0;
	strct.pr_minus_fl = 0;

	return (strct);
}

t_args ft_strct_zero(t_args strct)
{
	strct.zero = 0;
	strct.minus = 0;
	strct.type = 0;
	strct.accuracy = 0;
	strct.acc_fl = 0;
	strct.width = 0;
	strct.pr_minus_fl = 0;

	return (strct);
}

t_args flag_inicial(t_args strct, const char *inpt)
{
	char *flags;

	flags = "-0";
	strct.i++;
	while(ft_strchr(flags, inpt[strct.i]))
	{
		if(inpt[strct.i] == '-')
			strct.minus = 1;
		if(inpt[strct.i++] == '0' && strct.minus == 0)
			strct.zero = 1;
	}
	return (strct);
}

t_args width_inicial(t_args strct, const char *inpt, va_list args)
{
	if(inpt[strct.i] == '*')
	{
		strct.width = va_arg(args, int);
		strct.i++;
	}
	else
		while(ft_isdigit(inpt[strct.i]))
		{
			strct.width = strct.width * 10 + (inpt[strct.i] - 48);
			strct.i++;
		}
	return (strct);
}

t_args accuracy_inicial (t_args strct, const char *inpt, va_list args)
{
	if(inpt[strct.i] == '.')
	{
		strct.acc_fl = 1;
		strct.i++;
		if(inpt[strct.i] != '*' && !(ft_isdigit(inpt[strct.i])))
			strct.acc_fl = 2;
		if(inpt[strct.i] == '*')
		{
			strct.accuracy = va_arg(args, int);
			strct.i++;
		}
		else
			while (ft_isdigit(inpt[strct.i]))
			{
				strct.accuracy = strct.accuracy * 10 + (inpt[strct.i] - 48);
				strct.i++;
			}
	}
	return (strct);
}

t_args type_inicial (t_args strct, const char *inpt)
{
	char *types;

	types = "cspdiuxX%";
	strct.type = *ft_strchr(types, inpt[strct.i]);
	strct.i++;
	return (strct);
}

t_args print_inicial(t_args strct, va_list args)
{
	if(strct.type == 0)
		strct.type = -1;
	if(strct.type == 'c')
		ft_print_char(va_arg(args, int), strct);
	if(strct.type == 's')
		strct = ft_print_string(va_arg(args, char *), strct);
	if(strct.type == 'p')
		ft_print_p(va_arg(args, unsigned long long int));
	if(strct.type == 'd')
		strct = ft_print_d(va_arg(args, int), strct);
	if(strct.type == 'i')
		strct = ft_print_d(va_arg(args, int), strct);
	if(strct.type == 'u')
		strct = ft_print_u(va_arg(args, unsigned int), strct);
	if(strct.type == 'x')
		ft_print_x(va_arg(args, int), strct);
	if(strct.type == 'X')
		ft_print_X(va_arg(args, int), strct);
	if(strct.type == '%')
		strct = ft_print_perc(strct);
	return (strct);
}

t_args primary_inicial(const char *inpt, t_args strct, va_list args)
{
	strct.i = 0;
	
	while (strct.i < (int)ft_strlen(inpt))
	{
		while (inpt[strct.i] != '%' && inpt[strct.i] && strct.type != -1)
		{
			ft_putchar_fd(inpt[strct.i++], 1);
			strct.retval++;
		}
		strct = ft_strct_zero(strct);
		if(strct.i < (int)ft_strlen(inpt))
		{
			strct = flag_inicial(strct, inpt);
			strct = width_inicial(strct, inpt, args);
			strct = accuracy_inicial(strct, inpt, args);
			strct = type_inicial(strct, inpt);
			strct = print_inicial(strct, args);
		}
	}
	return (strct);
}

int ft_printf(const char *inpt, ...)
{
	t_args strct;
	va_list args;

	va_start(args, inpt);
	strct = ft_strct_inicial();
	strct = primary_inicial(inpt, strct, args);
	return (strct.retval);
}

/*int main()
{
	static char *s_hidden = "hi low\0don't print me lol\0";
 	int a;
 	printf("%.0u", 0);
 	printf("\n");
	a = ft_printf("%.0u", 0);
 	printf("\n%i", a);
	return 0;
}*/