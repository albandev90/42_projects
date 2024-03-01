/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:59:55 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 17:32:05 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of c (converted to an unsigned char) in string s.
//returns a pointer to the byte located, or NULL if no such byte exists 
//within n bytes. \0 is as any other char, keep till size_t.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

// int    main(void)
// {
//  char str[] = "dskfjsf567\08sipoklm)oiefjknesd1";
//  char *p = memchr(str, 49, 35);
//  printf("%s\n", p);
//  char str1[] = "dskfjsf567\08sipoklm)oiefjknesd1";
//  char *p1 = ft_memchr(str1, 49, 35);
//  printf("%s\n", p1);
//  return (0);
// }