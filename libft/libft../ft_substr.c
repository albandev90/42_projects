/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:07:56 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 20:29:52 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns j substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
// s: The string from which to create the substring.
// start: The start index of the substring in the
// string ’s’.
// len: The maximum length of the substring.
// Return value The substring.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*q;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	q = (char *)s + start;
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(q))
		j = ft_strlen(q) + 1;
	else
		j = len + 1;
	p = malloc (j * sizeof(char));
	if (!p)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char *str = "hello world";
// 	char *ret = ft_substr(str, 3, 4);

// 	printf("%s\n", ret);
// 	return (0);
// }