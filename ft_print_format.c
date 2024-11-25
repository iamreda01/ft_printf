/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:43:57 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/25 09:10:29 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_format(char specifier, va_list ap, int *count)
{

	if (specifier == 'c')
		ft_putchr(va_arg(ap, int), count);
	else if (specifier == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (specifier == 'u')
		ft_putunbr(va_arg(ap, int), count);
}