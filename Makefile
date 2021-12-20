# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcherki <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 16:05:51 by mcherki           #+#    #+#              #
#    Updated: 2021/12/12 16:05:56 by mcherki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

AR = ar rcs

NAME = libftprintf.a

SRC	= ft_printf.c ft_putlowerhex.c ft_putupperhex.c ft_putunsigned.c ft_putchar.c \
		ft_putstr.c ft_putpointer.c ft_putnbr.c

OBJ	= $(SRC:.c=.o)

%.o:%.c 
	@$(CC) $(CFLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $?

clean:
	@rm -rf ${OBJ}

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY : re clean fclean all

