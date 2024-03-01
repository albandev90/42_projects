/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:48:05 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 18:12:17 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//writes/fills len bytes of value c(some value) (converted to an unsigned char)
//to the string b. returns its first argument.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			j;
	unsigned char	*p;

	j = 0;
	p = (unsigned char *)b;
	while (len > j)
	{
		p[j] = c;
		j++;
	}
	return (p);
}

// int main()
// {
//     char str[] = "hello";
// 	printf("%s\n", ft_memset(str, 'a', 3));
// 	printf("%s\n", memset(str, 'a', 3));
// }
