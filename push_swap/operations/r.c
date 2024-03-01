/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:31:12 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:48:38 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **a, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *a;
	size = lstsize_p_sw(&tmp);
	if (size < 2)
		return ;
	last = lstlast_p_sw(*a);
	first = *a;
	last->next = first;
	(*a) = first->next;
	first->next = NULL;
	if (flag == 1)
		ft_printf("ra\n");
}

void	rb(t_node **b, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *b;
	size = lstsize_p_sw(&tmp);
	if (size < 2)
		return ;
	last = lstlast_p_sw(*b);
	first = *b;
	last->next = first;
	(*b) = first->next;
	first->next = NULL;
	if (flag == 1)
		ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b, int flag)
{
	ra(a, flag);
	rb(b, flag);
	ft_printf("rr\n");
}
