/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:04:56 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 13:18:46 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocates sufficient memory for a copy of the string s1, 
//does the copy, and returns a pointer to it. 

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int    main(void)
{
    char    str[] = "Hello";
    char    *p = ft_strdup(str);
    printf("%s\n", p);
}*/