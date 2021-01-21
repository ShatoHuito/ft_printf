#include "libftprintf.h"

t_args	ft_sct_inicial(void)
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

t_args	ft_sct_zero(t_args sct)
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

t_args	flag_inicial(t_args sct, const char *inpt)
{
	char *flags;

	flags = "-0";
	sct.i++;
	while (ft_strchr(flags, inpt[sct.i]))
	{
		if (inpt[sct.i] == '-')
			sct.minus = 1;
		if (inpt[sct.i++] == '0' && sct.minus == 0)
			sct.zero = 1;
	}
	return (sct);
}

t_args	width_inicial(t_args sct, const char *inpt, va_list args)
{
	if (inpt[sct.i] == '*')
	{
		sct.width = va_arg(args, int);
		sct.i++;
	}
	else
		while (ft_isdigit(inpt[sct.i]))
		{
			sct.width = sct.width * 10 + (inpt[sct.i] - 48);
			sct.i++;
		}
	if (sct.width < 0)
	{
		sct.minus = 1;
		sct.zero = 0;
		sct.width = sct.width * -1;
		sct.flag1 = 1;
	}
	return (sct);
}

t_args	accuracy_inicial(t_args sct, const char *inpt, va_list args)
{
	if (inpt[sct.i] == '.')
	{
		sct.acc_fl = 1;
		sct.i++;
		if (inpt[sct.i] != '*' && !(ft_isdigit(inpt[sct.i])))
			sct.acc_fl = 2;
		if (inpt[sct.i] == '*' && sct.i++)
			sct.acc = va_arg(args, int);
		else
			while (ft_isdigit(inpt[sct.i]))
			{
				sct.acc = sct.acc * 10 + (inpt[sct.i] - 48);
				sct.i++;
			}
	}
	if (sct.acc_fl && !(sct.acc))
		sct.flag3 = 1;
	if (sct.acc < 0)
	{
		sct.acc = 0;
		sct.flag2 = 1;
		sct.acc_fl = 0;
	}
	return (sct);
}
