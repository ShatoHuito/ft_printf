#include "ft_printf.h"


t_args ft_strct_inicial(t_args strct)
{
	strct.len = 0;
	strct.minus = 0;
	strct.plus = 0;
	strct.type = 0;

	return (strct);
}
t_args flag_inicial(int* p, t_args strct, const char *inpt)
{
	char *flags;
	flags = "cspdiuxX%";
	*p += 1;
	strct.type = *ft_strchr(flags, inpt[*p]);
	return (strct);
}

void type_inicial(const char *inpt, t_args strct, va_list args)
{
	int i;
	int c;

	i = 0;
	while (inpt[i])
	{
		while (inpt[i] != '%')
		{
			ft_putchar_fd(inpt[i], 1);
			i++;
		}
		strct = flag_inicial(&i, strct, inpt);
		if (strct.type == 'c' && (c = va_arg(args, int)))
			ft_print_char(c);
		i++;
	}
}

int ft_printf(const char *inpt, ...)
{
	t_args strct;
	va_list args;

	va_start(args, inpt);
	strct = ft_strct_inicial(strct);
	type_inicial(inpt, strct, args);
	return (0);
}

#include <stdio.h>
int main(void)
{
	ft_printf("qwerty %c %c", 'A', 'b');
	printf("\nqwerty %c %c", 'A', 'b');
	return 0;
}