# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 19:39:41 by almedetb          #+#    #+#              #
#    Updated: 2024/02/20 21:35:32 by almedetb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
RM = rm -f
CFLAGS	= -Wall -Wextra -Werror
C_FILES = push_swap.c\
			 ps_utils/parse.c\
			 ps_utils/ft_atoi_p_sw.c\
			 ps_utils/check_dubl.c\
			 sort/sort_more.c \
			 sort/move_to_top.c\
			 sort/sort_5.c\
			 sort/sort_4.c\
			 sort/sort_3.c\
			 sort/sort_2.c\
			 sort/check_sort.c\
			 sort/count_step.c\
			 sort/list_sort.c\
			 sort/sort_int_arr.c\
			 list_utils/find_limit_node.c\
			 list_utils/print_list.c\
			 list_utils/pre_last_node.c\
			 list_utils/last_node.c\
			 list_utils/del_node.c\
			 list_utils/list_size.c\
			 list_utils/push.c\
			 list_utils/find_node.c\
			 list_utils/set_ind.c\
			 list_utils/free_list.c\
			 operations/p.c\
			 operations/r.c\
			 operations/rr.c\
			 operations/s.c\
			 error_free_handling/error.c\
			 error_free_handling/free.c

O_FILES = $(C_FILES:.c=.o)
LIB = libft/libft.a
LIBFT = cd libft && make

$(NAME) : $(O_FILES)
		  $(LIBFT)
	      $(CC) $(CFLAGS) -o push_swap $(O_FILES) $(LIB)

clean:
	$(RM) $(O_FILES)
	@$(LIBFT) clean
	

fclean: clean
	$(RM) $(NAME)
	@$(LIBFT) fclean

all: $(NAME)

re: fclean all

.PHONY:	all clean fclean re libft