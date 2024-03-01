# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 16:35:43 by almedetb          #+#    #+#              #
#    Updated: 2023/08/21 21:12:25 by almedetb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c		ft_putchar.c	ft_u_hex.c\
		ft_putstr.c		ft_un_dgtlen.c	ft_l_hex.c\
		ft_dgtlen.c		ft_pointer.c\


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
