/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:26:05 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:26:07 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	ft_print_char(int c, t_args sct)
{
	while (!(sct.minus) && sct.width > 1 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	write(1, &c, 1);
	sct.retval++;
	while (sct.minus && sct.width > 1 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

t_args	print_p2(unsigned long long c, char *str, t_args sct)
{
	if (sct.zero && !(sct.acc_fl))
		while (sct.zero && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd('0', 1);
	else
		while (!(sct.minus) && sct.width >= 0 && sct.width-- && sct.retval++)
			ft_putchar_fd(' ', 1);
	ft_putstr_fd("0x", 1);
	if (sct.acc > 0)
		while (sct.acc >= 0 && sct.acc-- && sct.retval++)
			ft_putchar_fd('0', 1);
	if (!(c == 0 && sct.acc_fl && sct.acc == 0))
		ft_putstr_fd(str, 1);
	while (sct.minus && sct.width >= 0 && sct.width-- && sct.retval++)
		ft_putchar_fd(' ', 1);
	return (sct);
}

t_args	print_p3(int i, t_args sct)
{
	sct.retval = sct.retval + 2 + i;
	if (sct.acc && sct.width > sct.acc && sct.acc > i)
		sct.width = sct.width - (sct.acc - i);
	if (sct.width > 0)
		sct.width -= (i + 2);
	if (sct.acc > 0)
		sct.acc -= i;
	return (sct);
}

t_args	ft_print_p1(unsigned long long int c, t_args sct, int i)
{
	unsigned long long int	d;
	int						j;
	char					str[i + 1];

	d = c;
	j = 1;
	if (c == 0 && sct.acc_fl && sct.acc == 0)
		j = 0;
	while ((c / 16) > 0 && j++)
		c = c / 16;
	sct = print_p3(i, sct);
	str[j] = '\0';
	j--;
	while (j >= 0)
	{
		if (d % 16 < 10)
			str[j] = (d % 16) + 48;
		else
			str[j] = (d % 16) + 87;
		j--;
		d = d / 16;
	}
	sct = print_p2(c, str, sct);
	return (sct);
}

t_args	ft_print_p(unsigned long long int c, t_args sct)
{
	int						i;
	unsigned long long int	d;

	d = c;
	i = 1;
	if (c == 0 && sct.acc_fl && sct.acc == 0)
		i = 0;
	while ((d / 16) > 0 && i++)
		d = d / 16;
	sct = ft_print_p1(c, sct, i);
	return (sct);
}
