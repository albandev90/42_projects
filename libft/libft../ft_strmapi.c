/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:08:41 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 13:09:12 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

// The string created from the successive applications
// of ’f’.
// Returns NULL if the allocation fails.

// s: The string on which to iterate.
// f: The function to apply to each character.
//ft_strmapi returns a new string with the modified characters based on the 
//function f.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char my_func(unsigned int i, char str)
//  {
//  	return str + 32;
//  }

//  int main()
// {
//  	char str[10] = "HELLO";

//  	char *result = ft_strmapi(str, my_func);
//  	printf("%s\n", result);
//  	return 0;
//  }
