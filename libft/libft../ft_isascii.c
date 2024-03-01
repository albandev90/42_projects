/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:00:40 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 12:10:27 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)

{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int main ()
// {
//     char c = '5';
//     printf("%d", ft_isascii(c));
// }