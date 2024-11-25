#include "ft_printf.h"

void    ft_puthexa_upper(unsigned int src, int *count)
{
    int     i;
    char    *hexa;
    char    *res[255];

    hexa = "0123456789ABCDF";
    i = 0;
    while (src >= 16)
    {
        res[i] = hexa[src % 16];
        src /= 16;
        i++;
    }
    res[i] = hexa[src];
    while (i > 0)
    {
        ft_putchr(res[i], count);
        i--;
    }
}