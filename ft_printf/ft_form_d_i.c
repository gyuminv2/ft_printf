#include "ft_printf.h"

int	ft_form_d_i(long int  i)
{
	int cnt;

	cnt = 0;
	if (i < 0)
	{
		i = -i;
		cnt++;
		i = ft_putchr('-');
	}
	i += ft_putnbr(i);
	if (i == 0)
	{
		cnt++;
	}
	while (i != 0)
	{
		i = i / 10;
		cnt++;
	}
    return (cnt);
}
