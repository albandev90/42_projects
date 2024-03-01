/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limit_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:32:23 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:50:25 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_maxnode(t_node **head)
{
	int		max_node;
	t_node	*current;

	max_node = (*head)->data;
	current = *head;
	while (current != NULL)
	{
		if (max_node < current->data)
			max_node = current->data;
		current = current->next;
	}
	return (max_node);
}

int	find_minnode(t_node **head)
{
	int		min_node;
	t_node	*current;

	min_node = (*head)->data;
	current = *head;
	while (current != NULL)
	{
		if (min_node > current->data)
			min_node = current->data;
		current = current->next;
	}
	return (min_node);
}
