#include "libft/libft.h"
#include "ft_printf.h"


void strct_inicial(t_args *strct)
{
	strct->len = 0;
	strct->minus = 0;
	strct->plus = 0;
	strct->type = NULL;
}

void print(t_args *strct)
{
	if(strct->type == 'c')
		print_char
}


int ft_printf(const char *inpt, ...)
{
	int i;
	t_args *strct;
	va_list args;
	char *flags;
	va_start(args, inpt);

	if (!(strct = (t_args*)malloc(sizeof(t_args))))
		return (0);
	strct_inicial(strct);
	flags = "cspdiuxX%";
	i = 0;
	while (inpt[i])
	{
		if(inpt[i] != '%')
			ft_putchar_fd(inpt[i], 1);
		else if(inpt[i] == '%' && (strct->type = ft_strchr(flags, inpt[i + 1])))
		{
			print(strct, );
	}
}


int main()
{
	ft_printf("qwerty %c", 'A');
	return 0;
}
