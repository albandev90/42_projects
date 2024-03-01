/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:23:26 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:27 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_int(unsigned int n)
{
	int		len;

	len = 1;
	if (n > 9)
		len += ft_print_unsigned_int(n / 10);
	ft_print_char(n % 10 + '0');
	return (len);
}
