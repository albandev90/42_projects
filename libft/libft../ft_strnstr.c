/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:08:07 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 21:34:42 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of the null-terminated string n in the 
// string s, where not more than len characters are searched.  
// characters that appear after  \0 character are  not searched
// 	 If n is an empty string, s is returned; if n
//  occurs nowhere in s, NULL is returned; otherwise a pointer to 
//  the first character of the first occurrence of n is returned.

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (n[i] != '\0')
		i++;
	if (*n == '\0')
		return ((char *)s);
	if (len == 0)
		return (NULL);
	while (*s != '\0' && *n != '\0' && len >= i)
	{
		j = 0;
		while (s[j] == n[j] && n[j] != '\0')
		{
			j++;
		}
		if (n[j] == '\0')
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}
