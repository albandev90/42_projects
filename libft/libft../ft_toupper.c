/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:09:21 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/20 18:16:16 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
		return (c);
}

// #include <stdio.h>

// int main ()
// {
//     char c = 'a';
//     printf("%c", ft_toupper(c));
// }