/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:29:10 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:49:38 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sorted(t_node **head)
{
	t_node	*temp;

	temp = *head;
	while (temp->next != NULL)
	{
		if (temp->data >= temp->next->data)
			return (-1);
		temp = temp->next;
	}
	return (0);
}
