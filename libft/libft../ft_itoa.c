/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:54:01 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 12:10:46 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled.

#include "libft.h"

static int	len_count(int i)
{
	int	len;

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

char	*ft_itoa(int i)
{
	unsigned int	str_size;
	long int		n;
	char			*p;

	n = i;
	str_size = len_count(n);
	p = (char *)malloc(str_size * sizeof(char) + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		p[0] = '-';
	}
	p[str_size] = '\0';
	if (n == 0)
		p[str_size - 1] = '0';
	while (n)
	{
		str_size--;
		p[str_size] = (n % 10) + 48;
		n = n / 10;
	}
	return (p);
}
