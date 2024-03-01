/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dgtlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:49:09 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/21 20:55:39 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}

int	ft_dgtlen(int i)
{
	int	len;

	ft_putnbr(i);
	if (i <= 0)
		len = 1;
	else
		len = 0;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}
