#include "libftprintf.h"

t_args	type_inicial(t_args sct, const char *inpt)
{
	char	*types;

	types = "cspdiuxX%";
	if (ft_strchr(types, inpt[sct.i]) == NULL)
		return (sct);
	else
		sct.type = *ft_strchr(types, inpt[sct.i]);
	sct.i++;
	return (sct);
}

t_args	print_inicial(t_args sct, va_list args)
{
	if (sct.type == 0)
	{
		sct.type = -1;
		return (sct);
	}
	if (sct.type == 'c')
		sct = ft_print_char(va_arg(args, int), sct);
	if (sct.type == 's')
		sct = ft_print_string(va_arg(args, char *), sct);
	if (sct.type == 'p')
		sct = ft_print_p(va_arg(args, unsigned long long int), sct);
	if (sct.type == 'd')
		sct = ft_print_d(va_arg(args, int), sct);
	if (sct.type == 'i')
		sct = ft_print_d(va_arg(args, int), sct);
	if (sct.type == 'u')
		sct = ft_print_u(va_arg(args, unsigned int), sct);
	if (sct.type == 'x')
		sct = ft_print_x(va_arg(args, unsigned int), sct);
	if (sct.type == 'X')
		sct = ft_print_X(va_arg(args, unsigned int), sct);
	if (sct.type == '%')
		sct = ft_print_perc(sct);
	return (sct);
}

t_args	primary_inicial(const char *inpt, t_args sct, va_list args)
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
		if (sct.i < (int)ft_strlen(inpt))
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

int	ft_printf(const char *inpt, ...)
{
	t_args	sct;
	va_list	args;

	va_start(args, inpt);
	sct = ft_sct_inicial();
	sct = primary_inicial(inpt, sct, args);
	return (sct.retval);
}
