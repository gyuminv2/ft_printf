#include "libft.h"

int	ft_putnbr(int n)
{
	int cnt;

	cnt = 0;
	if (n < 0)
		n = -n;
	if (n >= 10)
	{
		cnt = ft_putnbr(n / 10);
		cnt = ft_putnbr(n % 10);
	}
	else
		cnt += ft_putchr(n + '0');
	return (cnt);
}