# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juspende <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 09:31:51 by juspende          #+#    #+#              #
#    Updated: 2017/07/17 08:48:09 by juspende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		do-op

SRCS	=		srcs/ft_putstr.c	\
				srcs/ft_putnbr.c	\
				srcs/ft_strcmp.c	\
				srcs/ft_atoi.c		\
				srcs/main.c			\
				srcs/ft_add.c		\
				srcs/ft_usage.c		\
				srcs/ft_putchar.c

OBJS	=		$(SRCS:.c=.o)

CC		=		CC

CFLAGS	=		-I ./includes/ -Wall -Wextra -Werror

RM		=		rm -f

CLEAN	=		clean

all		:
				@make $(NAME)

$(NAME)	:		$(OBJS)
				$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean	:
				$(RM) $(OBJS)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all
