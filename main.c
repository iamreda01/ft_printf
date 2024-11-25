#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int x = ft_printf("%d\n", -2147483648);
	printf("%d\n", x);
	int y = printf("%d\n", -2147483648);
	printf("%d\n", y);
	
}