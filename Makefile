# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcherki <mcherki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 16:05:51 by mcherki           #+#    #+#              #
#    Updated: 2022/03/24 14:01:03 by mcherki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

AR = ar rcs

NAME = libftprintf.a

SRC	= printf.c\
	hex.c\
	nbr_str.c 

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

