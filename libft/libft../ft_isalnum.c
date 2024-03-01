/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:49:24 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 12:09:57 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//tests for any character for which isalpha(3) or isdigit(3) is true.

#include "libft.h"

int	ft_isalnum(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

//#include <stdio.h>

// int main ()
// {
//     char c = '5';
//     printf("%d", ft_isalnum(c));
// }