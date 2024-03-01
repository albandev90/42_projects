/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:29:34 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:55:45 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	chunk_count(int size_a)
{
	if (size_a <= 250)
		return (30);
	else
		return (50);
}

void	sorting(t_node *a, t_node *b, int size)
{
	t_move	move;
	int		arr[3];

	ft_bzero(arr, 3);
	if (check_sorted(&a) == 0)
	{
		free_list(&a);
		exit(1);
	}
	b = NULL;
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b, &move);
	else if (size == 5)
		sort_5(&a, &b, &move);
	else
	{
		arr[0] = chunk_count(lstsize_p_sw(&a));
		arr[1] = lstsize_p_sw(&a);
		arr[2] = arr[0];
		sort_bignum(&a, &b, &move, arr);
	}
}
