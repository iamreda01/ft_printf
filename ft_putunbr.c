/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:44:46 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/25 09:21:04 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(int nbr, int *count)
{

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