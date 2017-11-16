# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juspende <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 09:31:51 by juspende          #+#    #+#              #
#    Updated: 2017/07/23 18:37:30 by juspende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		colle-02

SRCS	=		srcs/functions/ft_putstr.c				\
				srcs/functions/ft_putchar.c				\
				srcs/functions/ft_putsterr.c			\
				srcs/functions/ft_putnbr.c				\
				srcs/functions/ft_strdup.c				\
				srcs/functions/tab_comparator.c			\
				srcs/sastantuah/sastantuah.c			\
				srcs/sastantuah/reverse_sastantuah.c	\
				srcs/rush00/rush00.c					\
				srcs/rush00/rush01.c					\
				srcs/rush00/rush02.c					\
				srcs/rush00/rush03.c					\
				srcs/rush00/rush04.c					\
				srcs/formes/carre.c						\
				srcs/formes/carre_inverse.c				\
				srcs/formes/rectangle.c					\
				srcs/formes/rectangle_inverse.c			\
				srcs/formes/triangle.c					\
				srcs/formes/triangle_inverse.c			\
				srcs/formes/losange.c					\
				srcs/formes/losange_inverse.c			\
				srcs/formes/rond_inverse.c				\
				srcs/parsing/basic_form.c				\
				srcs/main.c

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
