/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:30:22 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:57:49 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_back(t_node **a, t_node **b)
{
	int		size_b;
	t_move	move;

	size_b = lstsize_p_sw(b);
	while (size_b > 0)
	{
		move_top_max(&move, b);
		pa(a, b);
		size_b--;
	}
	free_list(a);
}

void	sort_bignum(t_node **a, t_node **b, t_move *move, int *arr)
{
	t_node	*start_a;

	start_a = *a;
	while (arr[1] > 0)
	{
		if (start_a->pos <= arr[0])
		{
			move_top_cur(move, a, start_a->pos);
			pb_sortmore(a, b);
			if (start_a->pos < (arr[0] - (arr[2] / 2)))
				rb(b, 1);
			start_a = start_a->next;
			del_node(a);
			arr[1]--;
		}
		else
			start_a = start_a->next;
		if (start_a == NULL)
		{
			start_a = *a;
			arr[0] += arr[2];
		}
	}
	push_back(a, b);
}
