/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:21:39 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 13:17:51 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies len bytes from string src to string dst.  The two strings may overlap; 
//the copy is always done in a non-destructive manner.
//returns the original value of dst.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s < d)
		while (len--)
			d[len] = s[len];
	else if (s > d)
		while (len--)
			*d++ = *s++;
	return (dst);
}

// int    main(void)
// {
// char    src[] = "abcdefg";
// printf("%s\n", memmove(&src[4], &src[0], 4));

// char    src1[] = "abcdefg";
//     printf("%s\n", ft_memmove(0, &src1[5], 4));
// }