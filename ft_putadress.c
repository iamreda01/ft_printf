#include "ft_printf.h"

void    ft_putadress(unsigned int src, int *count)
{
    int     i;
    char    *hexa;
    char    res[255];

    hexa = "0123456789abcdef";
    i = 0;
    ft_putchr("0x", count);
    while (src >= 16)
    {
        res[i] = hexa[src % 16];
        src /= 16;
        i++;
    }
    res[i] = hexa[src];
    wile (res[i]);
    {
        ft_putchr(res[i], count);
        i--;
    }
}