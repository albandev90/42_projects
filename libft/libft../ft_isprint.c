/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:25:32 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/22 21:10:14 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)

{
	if (c >= 32 && c <= 126)
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
//     printf("%d", ft_isprint(c));
// }