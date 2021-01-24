/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dec_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:26:36 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:26:37 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	ft_ptnbr_mod(int c, t_args sct, int len)
{
	if (c == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		sct.retval = sct.retval + 11;
		return (sct);
	}
	if (c < 0)
	{
		ft_putchar_fd('-', 1);
		c = c * -1;
		sct.retval++;
	}
	while (sct.acc > len)
	{
		ft_putnbr_fd(0, 1);
		sct.acc--;
		sct.retval++;
	}
	if (c == 0 && sct.flag3 && sct.width && sct.retval++)
		ft_putchar_fd(' ', 1);
	if (len)
		ft_putnbr_fd(c, 1);
	sct.retval = sct.retval + len;
	return (sct);
}

t_args	width_more_len(int c, t_args sct, int len)
{
	if (sct.zero && !(sct.acc) && !(sct.acc_fl))
	{
		if (c < 0)
		{
			ft_putchar_fd('-', 1);
			c = c * -1;
			sct.retval++;
		}
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
	sct = ft_ptnbr_mod(c, sct, len);
	while (sct.minus && sct.width > 0 && sct.width-- && sct.retval++)
		ft_putchar_fd(' ', 1);
	return (sct);
}
