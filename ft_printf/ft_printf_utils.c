#include "ft_printf.h"

// int ft_except(va_list *ap, char type)
// {

// }

int print_value(va_list *ap, char type)
{
    int value;

    value = 0;
    if (type == 'c')
        value = ft_putchr(va_arg(*ap, int));
    else if (type == 's')
        value = ft_putstr(va_arg(*ap, char *));
    else if (type == 'p')
        value = ft_putstr("0x") + 123;
    // else if (type == 'd' || type == 'i')
    //     123;
    else if (type == 'u')
        value = ft_basedeci(va_arg(*ap, int), );
    // esle if (type == 'X')
    //     123;
    // else if (type == 'x')
    //     213;
    else if (type == '%')
        value = ft_putchr('%');
    return (value);
}

int type_check(va_list *ap,const char *types, int *cnt)
{
    int i;

    i = 0;
    while (types[i])
	{
		if (types[i] != '%')
		{
			*cnt = *cnt + ft_putchr(types[i]);
		}
		else if (types[i + 1] && ft_strchr("cspdiuxX%", types[i + 1]))
		{
			*cnt = *cnt + print_value(ap, types[i + 1]);
			i++;
		}
		i++;
	}
    return (*cnt);
}