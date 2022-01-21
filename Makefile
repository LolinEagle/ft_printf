# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 13:04:01 by frrusso           #+#    #+#              #
#    Updated: 2022/01/21 13:04:02 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
AR		= ar -r
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
SRCS	= ft_printf.c ft_printf_utils.c ft_putchar_fd.c ft_itoa.c ft_utoa.c
OBJS	= ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${AR} ${NAME} ${OBJS}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME} a.out

re:fclean all

debug:all
	${CC} main.c ${NAME} && clear && ./a.out

.PHONY: all clean fclean re
