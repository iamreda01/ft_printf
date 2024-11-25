/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:47:51 by rel-kass          #+#    #+#             */
/*   Updated: 2024/11/25 10:03:16 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
void	ft_printf_format(char specifier, va_list ap, int *count);
void	ft_putchr(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_putunbr(int nbr, int *count);



# endif