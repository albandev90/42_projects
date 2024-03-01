/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:12:08 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/21 19:57:35 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes an unsigned long integer (usually representing a memory address) 
// and prints its hexadecimal representation. It does this by recursively
//  breaking down the number into hexadecimal digits and printing them 
//  using the hexadecimal character mapping in the hex string. If the
//   number is greater than 15, it divides it by 16 to get the next 
//   digit and continues with the remainder. It returns the total count 
//   of characters printed.
// takes an unsigned long integer and handles the formatting of a pointer. 
// If the input is 0, it prints "0x0". Otherwise, it first prints "0x" 
// using ft_putstr, then calls ft_putpointer to print the hexadecimal 
// representation of the address. It returns the total count of characters
//  printed.

// In simpler words, these functions help you print the hexadecimal 
// representation of a memory address as a pointer, starting with "0x", 
// and count the number of characters printed in the process.

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
