/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_last_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:32:51 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:47:27 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*lstprelast_p_sw(t_node *lst)
{
	while (lst && lst->next->next)
		lst = lst->next;
	return (lst);
}
