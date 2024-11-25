/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:44:23 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/25 10:13:34 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", count);
	if (nbr < 0)
	{
		ft_putchr(45, count);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
	else
	{
		nbr += 48;
		ft_putchr(nbr, count);
	}
}