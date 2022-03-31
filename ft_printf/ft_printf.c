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

// int main()
// {
//     char *A = "123";
//     int B = -2147483648;

//     // printf("fu : %p\n", A);
//     // ft_printf("ft : %p\n", A);
//     // printf("fu : %d\n", printf("%p\n", A));
//     // ft_printf("ft : %d\n", ft_printf("%p\n", A));
    
//     // printf("fu : %x\n", B);
//     // ft_printf("ft : %x\n", B);
//     // printf("fu : %d\n", printf("%x\n", B));
//     // ft_printf("ft : %d\n", ft_printf("%x\n", B));

//     printf("[fu] : %li\n", -41474836489);
//     ft_printf("[ft] : %i\n", -41474836489);
//     printf("fu : %d\n", printf("%li\n", -41474836489));
//     ft_printf("ft : %d\n", ft_printf("%i\n", -41474836489));

//     printf("[fu] : %ld\n", -41474836489);
//     ft_printf("[ft] : %d\n", -41474836489);
//     printf("fu : %d\n", printf("%ld\n", -41474836489));
//     ft_printf("ft : %d\n", ft_printf("%d\n", -41474836489));

// //     printf("fu : %u\n", B);
// //     ft_printf("ft : %u\n", B);
// //     printf("fu : %d\n", printf("%u\n", B));
// //     ft_printf("ft : %d\n", ft_printf("%u\n", B));
// }
