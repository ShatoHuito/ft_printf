#include "ft_printf.h"
#include <stdio.h>


t_args ft_strct_inicial(t_args strct)
{
	strct.zero = 0;
	strct.len = 0;
	strct.minus = 0;
	strct.plus = 0;
	strct.type = 0;
	strct.accuracy = 0;
	strct.accuracy_flag = 0;
	strct.width_flag = 0;
	strct.width = 0;

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
		if(inpt[strct.i++] == '0')
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
		strct.accuracy_flag = 1;
		strct.i++;
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

void print_inicial(t_args strct, va_list args)
{
	if(strct.type == 'c')
		ft_print_char(va_arg(args, int), strct);
	if(strct.type == 's')
		ft_print_string(va_arg(args, char *), strct);
}

void primary_inicial(const char *inpt, t_args strct, va_list args)
{
	strct.i = 0;
	
	while (inpt[strct.i])
	{
		while (inpt[strct.i] != '%' && inpt[strct.i])
			ft_putchar_fd(inpt[strct.i++], 1);
		strct = ft_strct_inicial(strct);
		if(inpt[strct.i])
		{
			strct = flag_inicial(strct, inpt);
			strct = width_inicial(strct, inpt, args);
			strct = accuracy_inicial(strct, inpt, args);
			strct = type_inicial(strct, inpt);
			print_inicial(strct, args);
		}
	}
}

int ft_printf(const char *inpt, ...)
{
	t_args strct;
	va_list args;

	va_start(args, inpt);
	strct = ft_strct_inicial(strct);
	primary_inicial(inpt, strct, args);
	return (0);
}


int main(void)
{
	char x = 1;
	printf("qwerty %d", &x);
	setbuf(stdout, NULL);
	ft_printf("\nqwerty %.*s|", 4, "ZXCVBN");

	return 0;
}