/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:28:40 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:58:50 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "errno.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_node {
	int				data;
	int				index;
	int				pos;
	struct s_node	*next;
}	t_node;

typedef struct s_move {
	int	step;
	int	route;
}	t_move;

void		checking_params(char **av);
void		sorting_int_arr(int *tab, int size);
int			checking_dublic(int *arr, int size);
void		setting_pos(t_node **head, int *arr, int size);
char		**getting_final_av(int ac, char **av);
int			getting_final_size(char **final_av);
int			ft_atoi_p_sw(char *s, char **final_av, int *arr, int index);
int			space_checking(char *s);
void		prep_sort(t_node *a, t_node *b, char **final_av, int size);
char		**make_arr(int ac, char **av);
void		prelim_check(int ac, char **av);

void		del_node(t_node **head);
t_node		*find_node(t_node **head, int data);
t_node		*lstlast_p_sw(t_node *lst);
t_node		*lstprelast_p_sw(t_node *lst);
int			lstsize_p_sw(t_node **head);
void		push(t_node **head, int data, int index, int pos);
int			find_maxnode(t_node **head);
int			find_minnode(t_node **head);
void		set_ind(t_node **head);
void		free_list(t_node **head);

void		sa(t_node *a, int flg);
void		sb(t_node *b, int flag);
void		ss(t_node *a, t_node *b, int flag);
void		pa(t_node **a, t_node **b);
void		pb(t_node **a, t_node **b);
void		pb_sortmore(t_node **a, t_node **b);
void		ra(t_node **a, int flag);
void		rb(t_node **b, int flag);
void		rr(t_node **a, t_node **b, int flag);
void		rra(t_node **a, int flag);
void		rrb(t_node **b, int flag);
void		rrr(t_node **a, t_node **b, int flag);

int			check_sorted(t_node **head);
int			count_steps(t_move *move, int size, int index);
void		sorting_int_arr(int *tab, int size);
void		sorting(t_node *a, t_node *b, int size);
void		sort_2(t_node **a);
void		sort_3(t_node **a);
void		sort_4(t_node **a, t_node **b, t_move *move);
void		sort_5(t_node **a, t_node **b, t_move *move);
void		sort_bignum(t_node **a, t_node **b, t_move *move, int *arr);
void		sort_more_1(t_node **a, t_node **b, t_move *move, int *arr);
void		move_top_min(t_move *move, t_node **head);
void		move_top_max(t_move *move, t_node **head);
void		move_top_cur(t_move *move, t_node **a, int pos);

void		error(void);
void		error_2(char *str, char **final_argv);
void		free_argv(char **argv);
void		free_final_argv(char **final_argv);
void		free_final_argv_2(char **final_argv, int index);
void		free_complex(int *arr, char **final_argv);
void		free_complex_2(int *arr, char **final_argv, int index);
void		free_error_complex(int *arr, char **final_av, int index);

#endif