/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:12:08 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/14 16:37:31 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n)
{
	int		c;
	char	*hex;

	c = 1;
	hex = "0123456789abcdef";
	if (n > 15)
		c += ft_putpointer(n / 16);
	ft_putchar(hex[n % 16]);
	return (c);
}

int	ft_pointer(unsigned long n)
{
	int	c;

	if (n == 0)
		return (ft_putstr("0x0"));
	else
		c = ft_putstr("0x") + ft_putpointer(n);
	return (c);
}
