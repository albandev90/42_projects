/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:31:18 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:48:48 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **a, int flag)
{
	t_node	*pre_last;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *a;
	size = lstsize_p_sw(&tmp);
	if (size < 2)
		return ;
	last = lstlast_p_sw(*a);
	pre_last = lstprelast_p_sw(*a);
	pre_last->next = NULL;
	last->next = *a;
	(*a) = last;
	if (flag == 1)
		ft_printf("rra\n");
}

void	rrb(t_node **b, int flag)
{
	t_node	*pre_last;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *b;
	size = lstsize_p_sw(&tmp);
	if (size < 2)
		return ;
	last = lstlast_p_sw(*b);
	pre_last = lstprelast_p_sw(*b);
	pre_last->next = NULL;
	last->next = *b;
	(*b) = last;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b, int flag)
{
	rra(a, flag);
	rrb(b, flag);
	ft_printf("rrr\n");
}
