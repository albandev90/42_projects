/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:23:06 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:08 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(int n)
{
	int		len;

	len = 1;
	if (n == -2147483648)
		return (ft_print_string("-2147483648"));
	if (n < 0)
	{
		ft_print_char('-');
		len++;
		n = -n;
	}
	if (n > 9)
		len += ft_print_int(n / 10);
	ft_print_char(n % 10 + '0');
	return (len);
}
