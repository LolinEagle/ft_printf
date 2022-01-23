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

CC		= cc
AR		= ar -r
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
SRCS	= ft_printf.c ft_printf_utils.c ft_printf_libft.c
OBJS	= ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${AR} ${NAME} ${OBJS}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all

# Rule for tests
debug:all
	${CC} ../test/main.c ${NAME} && clear && ./a.out

git:fclean
	${RM} a.out ../.DS_Store .DS_Store ../test/.DS_Store

.PHONY: all clean fclean re debug git
