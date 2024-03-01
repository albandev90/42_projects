/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:51:47 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/21 21:19:07 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//It takes a format specifier a and a list of arguments args. Depending on 
//the value of a, it performs different actions, prints type of data
//returns the total length of characters printed or calculated

#include "ft_printf.h"

int	ft_len(const char a, va_list args)
{
	int	len;

	len = 0;
	if (a == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (a == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (a == 'p')
		len += ft_pointer(va_arg(args, unsigned long));
	else if (a == 'd' || a == 'i')
		len += ft_dgtlen(va_arg(args, int));
	else if (a == 'u')
		len += ft_un_dgtlen(va_arg(args, int));
	else if (a == 'x')
		len += ft_l_hex(va_arg(args, unsigned int));
	else if (a == 'X')
		len += ft_u_hex(va_arg(args, unsigned int));
	else
		len += ft_putchar(a);
	return (len);
}

//takes a string with special markers (like %d or %s) and additional
//  values. It goes through the string, replacing the markers with the 
//  actual values and printing everything out. The function calculates 
//  and returns the total number of characters it prints. It's like a tool 
//  for printing text with special instructions inside the text.

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		t_len;

	i = 0;
	t_len = 0;
	va_start(args, s); 
	while (s[i])
	{
		if (s[i] == '%')
		{
			t_len += ft_len(s[i + 1], args);
			i++;
		}
		else
			t_len += ft_putchar(s[i]);
		if (s[i])
			i++;
	}
	va_end(args);
	return (t_len);
}

// int main()
// {
//     // int hex1 = 256;
//     // int hex2 = 7856892;
//     // int l1 = 0;
//     // int l2 = 0;
//     // l1 = ft_printf("Hex: %x %x %X %X\n", hex1, hex2, hex1, hex2);
//     // l2 =    printf("Hex: %x %x %X %X\n", hex1, hex2, hex1, hex2);
//     ft_printf("ft_printf length: %%", 68465684);
//     // printf("printf length: %");
//     // printf(".  printf length: %%%\n", l2);
//     return 0;
// }