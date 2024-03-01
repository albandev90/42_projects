/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:03:37 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 13:02:09 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of c (converted to a char) in the string pointed
// to by s. The terminating null character is considered to be 
// part of the string; therefore if c is `\0', the functions  locate the 
// terminating `\0'.return a pointer to the located character, or NULL if the 
// character does not appear in the string.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == '\0' && (unsigned char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
