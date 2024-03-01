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

// takes an unsigned integer and prints its decimal digits. It does this by
//  recursively breaking down the number into individual digits and printing 
//  them. If the number is greater than or equal to 10, it divides it by 10 to 
//  get the next digit and then continues with the remainder. Otherwise, it d
//  irectly prints the digit.

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

// takes an unsigned integer and calculates the number of decimal digits in
//  it. It achieves this by first calling ft_putunbr to print the digits, 
//  similar to the previous function. Then, it counts the number of digits 
//  by repeatedly dividing the number by 10 and incrementing the len 
//  counter. If the input number is 0, it sets len to 1.
//  print the decimal digits of an unsigned integer (ft_putunbr) and 
//  count the number of those digits (ft_un_dgtlen).

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
