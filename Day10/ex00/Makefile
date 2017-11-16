# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juspende <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 09:31:51 by juspende          #+#    #+#              #
#    Updated: 2017/07/17 09:05:30 by juspende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRCS	=		srcs/ft_putchar.c		\
				srcs/ft_putstr.c		\
				srcs/ft_strcmp.c		\
				srcs/ft_strlen.c		\
				srcs/ft_swap.c

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc -c

CFLAGS	=		-Wall -Wextra -Werror

LIB		=		-I./headers

RM		=		rm -f

CLEAN	=		clean

all		:		$(NAME)

$(NAME)	:
				$(CC) $(SRCS)
				ar rcs $(NAME) *.o

clean	:
				$(RM) *.o
				$(RM) $(OBJS)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all
