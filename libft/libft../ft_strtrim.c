/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:12:44 by almedetb          #+#    #+#             */
/*   Updated: 2024/01/24 17:06:56 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_findchar(const char *str, int i)
{
	int	b;

	b = 0;
	while (str[b] != i && str[b] != '\0')
	{
		b++;
	}
	if (str[b] == i)
		return ((char *)&str[b]);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*p;
	char		*t;
	const char	*temp;
	int			counter;
	int			a;

	counter = 0;
	a = 0;
	if (!s1 || !set)
		return (NULL);
	p = &s1[ft_strlen(s1) - 1];
	while (s1[a] != '\0' && ft_findchar(set, s1[a]))
		a++;
	if (s1[a] == '\0')
	{
		t = (char *)malloc(1);
		*t = '\0';
		return (t);
	}
	while (ft_findchar(set, *p))
		p--;
	temp = &s1[a];
	while (temp++ != p + 1)
		counter++;
	return (ft_substr(s1, a, counter));
}
