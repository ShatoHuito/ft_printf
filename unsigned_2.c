/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:27:26 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:27:27 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_args	putnbr_u(unsigned int n, int fd, t_args sct)
{
	char c;

	if (n / 10)
		putnbr_u(n / 10, fd, sct);
	c = n % 10 + 48;
	if (sct.acc || n != 0 || !(sct.acc_fl))
		write(fd, &c, 1);
	return (sct);
}

int		u_len(unsigned int c, t_args sct)
{
	int len;

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

t_args	ft_ptnbr_mod_u(unsigned int c, t_args sct, int len)
{
	while (sct.acc > len)
	{
		ft_putnbr_fd(0, 1);
		sct.acc--;
		sct.retval++;
	}
	if (len)
		sct = putnbr_u(c, 1, sct);
	sct.retval = sct.retval + len;
	return (sct);
}
