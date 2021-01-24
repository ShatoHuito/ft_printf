/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:26:13 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:26:15 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	width_more_len_x(unsigned int c, t_args sct, int len)
{
	if (sct.zero && !(sct.acc) && !(sct.acc_fl))
	{
		while (!(sct.flag3) && sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	while (!(sct.minus) && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	sct = ft_ptnbr_mod_x(c, sct, len);
	while (sct.minus && sct.width > 0 && sct.width--)
	{
		ft_putchar_fd(' ', 1);
		sct.retval++;
	}
	return (sct);
}

t_args	width_les_len_x(unsigned int c, t_args sct, int len)
{
	if (sct.zero && !(sct.acc_fl))
	{
		while (sct.width > 0 && sct.width--)
		{
			ft_putnbr_fd(0, 1);
			sct.retval++;
		}
	}
	sct = ft_ptnbr_mod_x(c, sct, len);
	return (sct);
}

t_args	width_inic_x(unsigned int c, t_args sct, int len)
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

t_args	ft_print_x(unsigned int c, t_args sct)
{
	int len;

	len = x_len(c, sct);
	if (sct.width > len)
		sct = width_more_len_x(c, width_inic_x(c, sct, len), len);
	else
		sct = width_les_len_x(c, width_inic_x(c, sct, len), len);
	return (sct);
}

t_args	ft_print_hix(unsigned int c, t_args sct)
{
	int len;

	len = x_len(c, sct);
	if (sct.spcasefl)
		return (sct);
	if (sct.width > len)
		sct = width_more_len_x(c, width_inic_x(c, sct, len), len);
	else
		sct = width_les_len_x(c, width_inic_x(c, sct, len), len);
	return (sct);
}
