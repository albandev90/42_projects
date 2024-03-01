/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:51:47 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/14 17:52:37 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(const char a, va_list list)
{
	int	len;

	len = 0;
	if (a == 'c')
		len += ft_putchar(va_arg(list, int));
	else if (a == 's')
		len += ft_putstr(va_arg(list, char *));
	else if (a == 'p')
		len += ft_pointer(va_arg(list, unsigned long));
	else if (a == 'd' || a == 'i')
		len += ft_dgtlen(va_arg(list, int));
	else if (a == 'u')
		len += ft_un_dgtlen(va_arg(list, int));
	else if (a == 'x')
		len += ft_l_hex(va_arg(list, unsigned int));
	else if (a == 'X')
		len += ft_u_hex(va_arg(list, unsigned int));
	else
		len += ft_putchar(a);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		t_len;

	i = 0;
	t_len = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			t_len += ft_len(s[i + 1], list);
			i++;
		}
		else
		{
			t_len += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(list);
	return (t_len);
}

// int main ()
// {
// 	int i = 0;
// 	i = ft_printf("%s\n","Hello world!!!");
// 	printf("%d\n", i);
// }