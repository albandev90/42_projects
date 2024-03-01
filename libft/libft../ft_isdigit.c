/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:26:56 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 16:32:55 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)

{
	if (c >= '0' && c <= '9')
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
//     printf("%d", ft_isdigit(c));
// }
