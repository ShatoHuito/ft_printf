#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>

typedef struct	s_struct
{
	 int minus;
	 int plus;
	 char type;
	 int len;
}				t_args;

int ft_printf(const char *inpt, ...);

#endif
