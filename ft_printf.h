#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_args
{
	 int minus;
	 int plus;
	 char type;
	 int len;
	 int zero;
	 int width_flag;
	 int accuracy_flag;
	 int width;
	 int accuracy;
	 int i;
}				t_args;

int ft_printf(const char *inpt, ...);
void ft_print_char(int c, t_args strct);
void ft_print_string(char *str, t_args strct);

#endif
