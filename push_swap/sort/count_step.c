/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_step.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:11:51 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 16:11:53 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_steps(t_move *move, int size, int index)
{
	int	top;
	int	bottom;

	top = index - 1;
	bottom = size - index + 1;
	if (top < bottom)
	{
		move->step = top;
		move->route = 1;
	}
	else
	{
		move->step = bottom;
		move->route = 0;
	}
	return (move->step);
}
