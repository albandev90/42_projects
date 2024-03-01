/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:23:13 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:15 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	process_point(unsigned long long n)
{
	char	*base;
	int		len;

	len = 1;
	base = "0123456789abcdef";
	if (n > 15)
		len += process_point(n / 16);
	ft_print_char(base[n % 16]);
	return (len);
}

int	ft_print_point(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (ft_print_string("0x0"));
	else
		len += ft_print_string("0x");
	len += process_point(n);
	return (len);
}
