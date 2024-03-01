/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:42:33 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 21:42:41 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node **a)
{
	t_node	*temp;

	if (!a)
		return ;
	temp = *a;
	while (temp != NULL)
	{
		ft_printf("d %d  i %d  p %d\n", temp->data, temp->index, temp->pos);
		temp = temp->next;
	}
}
