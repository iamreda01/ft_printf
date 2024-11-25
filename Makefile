# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 12:47:34 by rel-kass          #+#    #+#              #
#    Updated: 2024/11/24 15:55:48 by rel-kass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCF = ft_printf.c ft_print_format.c ft_putchr.c ft_putstr.c ft_putnbr.c ft_putunbr.c
OBJ = $(SRCF:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean