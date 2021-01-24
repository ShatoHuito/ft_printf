/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrittan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:26:54 by gbrittan          #+#    #+#             */
/*   Updated: 2021/01/22 15:26:55 by gbrittan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_args
{
	int		minus;
	char	type;
	int		zero;
	int		acc_fl;
	int		width;
	int		acc;
	int		i;
	int		retval;
	int		pr_minus_fl;
	int		flag1;
	int		flag2;
	int		flag3;
	int		spcasefl;
}				t_args;

int				ft_printf(const char *inpt, ...);
t_args			ft_print_char(int c, t_args sct);
t_args			ft_print_string(char *str, t_args sct);
t_args			ft_print_p(unsigned long long int c, t_args sct);
t_args			ft_print_d(int c, t_args sct);
t_args			ft_print_u(unsigned int c, t_args sct);
t_args			ft_print_x(unsigned int c, t_args sct);
t_args			ft_print_hix(unsigned int c, t_args sct);
t_args			ft_print_perc(t_args sct);
t_args			ft_sct_inicial(void);
t_args			ft_sct_zero(t_args sct);
t_args			flag_inicial(t_args sct, const char *inpt);
t_args			width_inicial(t_args sct, const char *inpt, va_list args);
t_args			accuracy_inicial (t_args sct, const char *inpt, va_list args);
int				x_len(unsigned int c, t_args sct);
t_args			ft_ptnbr_mod_x(unsigned int c, t_args sct, int len);
t_args			ft_ptnbr_mod(int c, t_args sct, int len);
t_args			width_more_len(int c, t_args sct, int len);
int				u_len(unsigned int c, t_args sct);
t_args			ft_ptnbr_mod_u(unsigned int c, t_args sct, int len);

#endif
