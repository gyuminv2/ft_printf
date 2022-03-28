#include "ft_printf.h"

int ft_printf(const char *types, ...)
{
    va_list ap;
    int     cnt;

    if (!types)
        return (-1);
    va_start(ap, types);
    cnt = type_check(&ap, types, &cnt);
    va_end(ap);
    return (cnt);
}

int main()
{
    char *A = "123";
    printf("123%% : %s", "0");
    printf("\n");
    ft_printf("\n");
    ft_printf("123%% : %s", "0");
}