#ifndef LIBFTPRINTF
#define LIBFTPRINTF

# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_args
{
	 int minus;
	 char type;
	 int zero;
	 int acc_fl;
	 int width;
	 int acc;
	 int i;
	 int retval;
	 int pr_minus_fl;
	 int flag1;
	 int flag2;
}				t_args;

int ft_printf(const char *inpt, ...);
t_args ft_print_char(int c, t_args sct);
t_args ft_print_string(char *str, t_args sct);
t_args ft_print_p(unsigned long long int c, t_args sct);
t_args ft_print_d(int c, t_args sct);
t_args ft_print_u(unsigned int c, t_args sct);
t_args ft_print_x(unsigned int c, t_args sct);
t_args ft_print_X(unsigned int c, t_args sct);
t_args ft_print_perc(t_args sct);

#endif
