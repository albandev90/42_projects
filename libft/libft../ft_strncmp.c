/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:43:33 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 18:17:50 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares not more than n characters.  Because strncmp() is designed for 
// comparing  strings rather than binary data, characters that appear 
// after a `\0' character are not compared.return an integer greater than, 
// equal to,or less than 0, according as the string s1 is greater than,equal to,
// or less than the string s2.  The comparison is done using unsigned
// characters, so that `\200' is greater than `\0'.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char x[]="demoasvfadsse";
//     char y[]="demfesfseogfesfWDX";
//     printf("%d\n", ft_strncmp(x,y,10));
// }
