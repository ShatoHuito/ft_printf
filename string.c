/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:27:10 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:27:11 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	strwidth_more_len(char *str, t_args sct)
{
	int i;

	i = 0;
	while (!(sct.minus) && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	if (!(sct.acc_fl))
	{
		ft_putstr_fd(str, 1);
		sct.retval += ft_strlen(str);
	}
	else
		while (sct.acc && str[i] && sct.acc--)
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

t_args	strwidth_les_len(char *str, t_args sct)
{
	int i;

	i = 0;
	if (!(sct.acc_fl))
	{
		ft_putstr_fd(str, 1);
		sct.retval += ft_strlen(str);
	}
	else
		while (sct.acc && str[i] && sct.acc--)
		{
			ft_putchar_fd(str[i++], 1);
			sct.retval++;
		}
	return (sct);
}

t_args	ft_print_string(char *str, t_args sct)
{
	int len;

	if (!(str))
		str = "(null)";
	len = 0;
	if (!(sct.flag3))
		len = (int)ft_strlen(str);
	if (sct.acc_fl && sct.acc < len)
		len = sct.acc;
	if (len >= sct.width)
		sct.width = 0;
	else
		sct.width -= len;
	if (sct.width)
		sct = strwidth_more_len(str, sct);
	else
		sct = strwidth_les_len(str, sct);
	return (sct);
}

t_args	ft_print_perc(t_args sct)
{
	sct.width -= 1;
	if (sct.zero)
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
