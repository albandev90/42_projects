/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:21:10 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 16:32:26 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies n bytes from memory area src to memory area dst.  If dst and src 
//overlap, behavior is undefined. returns the original value of dst.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
// int main() {
//     char src[] = "Hello, World!";
//     char dst[20]; 

//     ft_memcpy(dst, src, sizeof(src));

//     printf("Source: %s\n", src);
//     printf("Copied: %s\n", dst);

//     return 0;
// }