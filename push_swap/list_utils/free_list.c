/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:32:35 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 19:32:36 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_list(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		del_node(head);
		tmp = *head;
	}
}
