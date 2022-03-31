#include "libft.h"

void	ft_putnbr(long int n)
{
	if (n < 0)
		n = -n;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchr(n + '0');
}
