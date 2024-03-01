/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:31:02 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:47:42 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *b;
	temp = *b;
	size = lstsize_p_sw(&tmp);
	if (size == 0)
		return ;
	push(a, temp->data, 0, temp->pos);
	del_node(b);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *a;
	temp = *a;
	size = lstsize_p_sw(&tmp);
	if (size == 0)
		return ;
	push(b, temp->data, 0, temp->pos);
	del_node(a);
	ft_printf("pb\n");
}

void	pb_sortmore(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *a;
	temp = *a;
	size = lstsize_p_sw(&tmp);
	if (size == 0)
		return ;
	push(b, temp->data, 0, temp->pos);
	ft_printf("pb\n");
}
