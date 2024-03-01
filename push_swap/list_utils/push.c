/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:33:57 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 19:33:59 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **head, int data, int index, int pos)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	temp->data = data;
	temp->index = index;
	temp->pos = pos;
	temp->next = (*head);
	*head = temp;
}
