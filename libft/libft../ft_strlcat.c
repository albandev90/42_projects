/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:08:45 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 14:48:50 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// appends string src to the end of dst.  It will append at most dstsize - 
// strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 
// or the original dst string was longer than dstsize (in prac- tice this 
// should not happen as it means that either dstsize is incorrect or that dst 
// is not a proper string). If the src and dst strings overlap, the behavior
//  is undefined.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	des_len;
	unsigned int	j;
	unsigned int	len;
	unsigned int	src_len;

	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	des_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dstsize - 1;
	if (dstsize > des_len)
	{
		while (src[j] != '\0' && j < (len - des_len))
		{
			dst[des_len + j] = src[j];
			j++;
		}
		dst[des_len + j] = '\0';
		return (src_len + des_len);
	}
	else
		return (src_len + dstsize);
}
