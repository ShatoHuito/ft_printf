/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:26:30 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:26:31 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	width_les_len(int c, t_args sct, int len)
{
	if (sct.zero && !(sct.acc_fl))
	{
		if (c < 0 && c != -2147483648)
		{
			ft_putchar_fd('-', 1);
			c = c * -1;
			sct.retval++;
		}
		while (sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	sct = ft_ptnbr_mod(c, sct, len);
	return (sct);
}

int		dec_len(int c, t_args sct)
{
	int len;

	if (c == -2147483648)
	{
		len = 10;
		return (len);
	}
	len = 1;
	if (c < 0)
		c = c * -1;
	if (c == 0 && sct.acc_fl)
		len = 0;
	if (c == 0 && sct.acc_fl && sct.flag2)
		len = 1;
	while ((c = c / 10) > 0)
		len++;
	return (len);
}

t_args	width_inic(int c, t_args sct, int len)
{
	if (c >= 0)
	{
		if (len > sct.acc)
			sct.width = sct.width - len;
		else
			sct.width = sct.width - sct.acc;
	}
	else
	{
		if (len > sct.acc)
			sct.width = sct.width - len - 1;
		else
			sct.width = sct.width - sct.acc - 1;
	}
	return (sct);
}

t_args	special_cases(int c, t_args sct)
{
	while (sct.flag3 && c == 0 && sct.width)
	{
		sct.spcasefl = 1;
		ft_putchar_fd(' ', 1);
		sct.retval++;
		sct.width--;
	}
	return (sct);
}

t_args	ft_print_d(int c, t_args sct)
{
	int len;

	len = dec_len(c, sct);
	sct = special_cases(c, sct);
	if (sct.spcasefl)
		return (sct);
	if (sct.width > len)
		sct = width_more_len(c, width_inic(c, sct, len), len);
	else
		sct = width_les_len(c, width_inic(c, sct, len), len);
	return (sct);
}
