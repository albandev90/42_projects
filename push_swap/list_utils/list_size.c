/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:32:46 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:48:19 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lstsize_p_sw(t_node **head)
{
	int		size;
	t_node	*current;

	size = 0;
	current = *head;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
