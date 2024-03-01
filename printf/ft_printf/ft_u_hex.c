/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:56:56 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/13 19:06:25 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes unsigned integer and convert it into its hexadecimal representation 
// It does this by repeatedly dividing the integer by 16 and converting the 
// remainders into hexadecimal digits. The digits are printed out one by one, 
// starting from the most significant digit. The function counts the number of 
// digits in the hexadecimal representation and returns that count. In simpler 
// terms, it helps turn a number into its hexadecimal form and tells you how 
// many digits are in that hexadecimal number.

#include "ft_printf.h"

void	ft_putnbr_uhex(unsigned int n)
{
	if (n / 16 > 0)
	{
		ft_putnbr_uhex(n / 16);
	}
	if ((n % 16) >= 10 && (n % 16) < 16)
	{
		ft_putchar((n % 16) + 55);
	}
	else
		ft_putchar((n % 16) + 48);
}

int	ft_u_hex(unsigned int i)
{
	int				len;

	len = 0;
	ft_putnbr_uhex(i);
	if (i == 0)
		len = 1;
	while (i)
	{
		i = i / 16;
		len++;
	}
	return (len);
}
