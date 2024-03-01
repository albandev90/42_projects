/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:32:29 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:14:21 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_node(t_node **head, int data)
{
	t_node	*temp;

	temp = *head;
	while (temp != NULL)
	{
		if (temp->data == data)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	setting_pos(t_node **head, int *arr, int size)
{
	t_node	*temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp = find_node(head, arr[i]);
		temp->pos = i + 1;
		i++;
	}
}
