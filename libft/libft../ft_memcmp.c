/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:00:35 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 13:17:31 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compares byte string s1 against byte string s2.  Both strings are assumed
// to be n bytes long. returns zero if the two strings are identical, otherwise 
//returns the difference between the first two differing bytes 

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

// # include <stdio.h>
//  int main()
//  {
//     printf("%d\n", ft_memcmp("azaa", "aaaa", 4));
//  }