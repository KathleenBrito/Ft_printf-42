# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 23:11:22 by kada-sil          #+#    #+#              #
#    Updated: 2022/06/06 22:25:40 by kada-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_printf.c \
		ft_printf_utils.c \
		ft_treat_c.c \
		ft_treat_p.c \
		ft_treat_d.c \
		ft_treat_s.c \
		ft_treat_x.c \
		ft_utils.c \

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
CC = clang
CFLAGS =  -Wall -Wextra -Werror -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJ}
			ar -rcs ${NAME} ${OBJ}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

