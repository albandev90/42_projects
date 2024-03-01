/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:38:12 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 14:52:31 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the last occurrence of c (converted to a char) in the string 
// pointed to by s. The terminating null character is considered to be part
//  of the string; therefore if c is `\0', the functions locate the 
//  terminating `\0'. return a pointer to the located character, or 
//  NULL if the character does not appear in the string.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l > 0 && ((unsigned char *)s)[l] != (unsigned char)c)
		l--;
	if (((unsigned char *)s)[l] == (unsigned char)c)
		return ((char *)&s[l]);
	return (NULL);
}

// int    main(void)
// {
//     char    str[] = "bonjour";
//     char    *p = ft_strrchr(str, 'j');
//     printf("%s\n", p);

// 	    char    str1[] = "bonjour";
//     char    *q = strrchr(str1, 'j');
//     printf("%s\n", q);
// }
