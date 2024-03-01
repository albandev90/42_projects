/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:31:24 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:46:55 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node *a, int flg)
{
	int		temp;
	int		size;
	t_node	*tmp;

	tmp = a;
	size = lstsize_p_sw(&tmp);
	if (size < 2)
		return ;
	temp = a->data;
	a->data = a->next->data;
	a->next->data = temp;
	temp = a->pos;
	a->pos = a->next->pos;
	a->next->pos = temp;
	if (flg == 1)
		ft_printf("sa\n");
}

void	sb(t_node *b, int flag)
{
	int		temp;
	int		size;
	t_node	*tmp;

	tmp = b;
	size = lstsize_p_sw(&tmp);
	if (size < 2)
		return ;
	temp = b->data;
	b->data = b->next->data;
	b->next->data = temp;
	temp = b->pos;
	b->pos = b->next->pos;
	b->next->pos = temp;
	if (flag == 1)
		ft_printf("sb\n");
}

void	ss(t_node *a, t_node *b, int flag)
{
	sa(a, flag);
	sb(b, flag);
	ft_printf("ss\n");
}
