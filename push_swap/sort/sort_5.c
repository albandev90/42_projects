/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:30:10 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:56:56 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_node **a, t_node **b, t_move *move)
{
	int	i;

	i = -1;
	while (++i < 2)
	{
		move_top_min(move, a);
		pb(a, b);
		set_ind(a);
	}
	sort_3(a);
	if (check_sorted(b) == 0)
		sb(*b, 1);
	pa(a, b);
	pa(a, b);
	free_list(a);
}
