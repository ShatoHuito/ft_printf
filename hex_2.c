/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:26:20 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:26:22 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	putnbr_x(unsigned int n, t_args sct, int len)
{
	char	str[len + 1];

	str[len] = '\0';
	len--;
	while (len >= 0 && sct.type == 'x')
	{
		if (n % 16 < 10)
			str[len] = (n % 16) + 48;
		else
			str[len] = (n % 16) + 87;
		len--;
		n = n / 16;
	}
	while (len >= 0 && sct.type == 'X')
	{
		if (n % 16 < 10)
			str[len] = (n % 16) + 48;
		else
			str[len] = (n % 16) + 55;
		len--;
		n = n / 16;
	}
	ft_putstr_fd(str, 1);
	return (sct);
}

int		x_len(unsigned int c, t_args sct)
{
	int	len;

	len = 1;
	if (c == 0 && sct.acc_fl)
		len = 0;
	if (c == 0 && sct.acc_fl && sct.flag2)
		len = 1;
	while ((c / 16) > 0 && len++)
		c = c / 16;
	return (len);
}

t_args	ft_ptnbr_mod_x(unsigned int c, t_args sct, int len)
{
	while (sct.acc > len)
	{
		ft_putnbr_fd(0, 1);
		sct.acc--;
		sct.retval++;
	}
	if (len)
		sct = putnbr_x(c, sct, len);
	sct.retval = sct.retval + len;
	return (sct);
}
