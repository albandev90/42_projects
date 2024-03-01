/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:29:56 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 19:29:59 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_node **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->data;
	y = (*a)->next->data;
	z = (*a)->next->next->data;
	if ((x > y) && (x < z) && (y < z))
		sa(*a, 1);
	else if ((x > y) && (y > z))
	{
		sa(*a, 1);
		rra(a, 1);
	}
	else if ((x > y) && (x > z) && (y < z))
		ra(a, 1);
	else if ((x < y) && (x < z) && (y > z))
	{
		sa(*a, 1);
		ra(a, 1);
	}
	else if ((x < y) && (x > z) && (y > z))
		rra(a, 1);
	free_list(a);
}
