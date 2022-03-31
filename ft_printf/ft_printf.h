#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../Libft/libft.h"

# include <stdio.h>
# include <limits.h>

int ft_printf(const char *types, ...);
int type_check(va_list *ap,const char *types, int *cnt);
int print_value(va_list *ap, char type);

int	ft_form_u(unsigned int i, char *base);
int	ft_form_d_i(long int  i);
int	ft_form_p(unsigned long i, char *base);
int ft_form_x_1(unsigned int, char *base);
int ft_form_x_2(unsigned int i, char *base);

#endif
