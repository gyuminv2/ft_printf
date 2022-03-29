#include "ft_printf.h"

int ft_form_x_1(unsigned int i, char *base)
{
    int cnt;

    cnt = 0;
    if (i >= 16)
    {
        cnt += ft_form_p(i / 16, base);
        cnt += ft_form_p(i % 16, base);
    }
    else
        cnt += ft_putchr(base[i]);
    return (cnt);
} 