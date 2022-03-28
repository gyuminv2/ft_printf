#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../Libft/libft.h"

# include <stdio.h>

int ft_printf(const char *types, ...);
int type_check(va_list *ap,const char *types, int *cnt);
int print_value(va_list *ap, char type);

#endif
