/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:32:07 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/20 18:16:10 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	else
		return (c);
}

// #include <stdio.h>

// int main ()
// {
//     char c = 'A';
//     printf("%c", ft_tolower(c));
// }