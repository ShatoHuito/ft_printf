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
}				t_args;

int ft_printf(const char *inpt, ...);
void ft_print_char(int c);

#endif
