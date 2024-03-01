/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_un_dgtlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:38:31 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/13 17:51:10 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int i)
{
	if (i >= 10)
	{
		ft_putunbr(i / 10);
		ft_putunbr(i % 10);
	}
	else
		ft_putchar(i + 48);
}

int	ft_un_dgtlen(unsigned int i)
{
	int				len;

	len = 0;
	ft_putunbr(i);
	if (i == 0)
		len = 1;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}
