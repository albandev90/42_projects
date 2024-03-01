/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:30:04 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:56:51 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_4(t_node **a, t_node **b, t_move *move)
{
	move_top_min(move, a);
	set_ind(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
	free_list(a);
}
