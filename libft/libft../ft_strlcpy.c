/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:35:52 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 17:50:31 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// take the full size of the destination buffer and guarantee NUL-termination 
// if there is  room.  Note that room for the NUL should be included in dstsize.
//  copies up to dstsize - 1 characters from the string src to dst, 
// NUL-terminating the result if  dstsize is not 0.
// The number of characters that were intended to be copied from the source
// string (src).  In other words, it returns the length of the source string.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	n;

	n = 0;
	if (destsize == 0)
	{
		while (src[n] != '\0')
			n++;
		return (n);
	}
	while (src[n] != '\0' && n < (destsize - 1))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	while (src[n] != '\0')
		n++;
	return (n);
}

/*
int	main(void) {
    char dest[10];
    const char *src = "Hello, world!";
    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %n\n", dest);
    printf("Length of copied string: %zu\n", len);
    
    return (0);
}
*/