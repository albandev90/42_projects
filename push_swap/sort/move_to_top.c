/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:29:42 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:57:44 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_top_min(t_move *move, t_node **head)
{
	int		len;
	int		min_data;
	t_node	*min;
	t_node	*temp;
	t_node	*current;

	temp = *head;
	min = *head;
	current = *head;
	len = lstsize_p_sw(&temp);
	min_data = find_minnode(&min);
	while (current->data != min_data)
		current = current->next;
	if (count_steps(move, len, current->index) > 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				ra(head, 1);
			else
				rra(head, 1);
			move->step--;
		}
	}
}

void	move_top_max(t_move *move, t_node **head)
{
	int		len;
	int		max_data;
	t_node	*max;
	t_node	*temp;
	t_node	*current;

	temp = *head;
	max = *head;
	current = *head;
	set_ind(head);
	len = lstsize_p_sw(&temp);
	max_data = find_maxnode(&max);
	while (current->data != max_data)
		current = current->next;
	if (count_steps(move, len, current->index) > 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				rb(head, 1);
			else
				rrb(head, 1);
			move->step--;
		}
	}
}

void	move_top_cur(t_move *move, t_node **a, int pos)
{
	int		len;
	t_node	*current;
	t_node	*temp;

	set_ind(a);
	temp = *a;
	current = *a;
	len = lstsize_p_sw(&temp);
	while (current->pos != pos)
		current = current->next;
	if (count_steps(move, len, current->index) > 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				ra(a, 1);
			else
				rra(a, 1);
			move->step--;
		}
	}
}
