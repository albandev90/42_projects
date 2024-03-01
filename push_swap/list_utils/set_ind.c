/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ind.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:10:30 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 16:10:33 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_ind(t_node **head)
{
	t_node	*temp;
	int		i;

	temp = *head;
	i = 1;
	while (temp != NULL)
	{
		temp->index = i;
		i++;
		temp = temp->next;
	}
}
