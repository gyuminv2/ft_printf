#include "libft.h"

int	ft_putchr(int c)
{
	int	cnt;

	cnt = write(1, &c, 1);
	return (cnt);
}