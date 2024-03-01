/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:11:06 by almedetb          #+#    #+#             */
/*   Updated: 2023/10/20 14:07:36 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	k = 0;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == NULL)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		p[i + k] = s2[k];
		k++;
	}
	p[i + k] = '\0';
	return (p);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		k;
	char	*p;

	i = 0;
	k = ft_strlen(s);
	p = (char *) malloc(sizeof(*s) * (k + 1));
	while (i < k)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*p;

	p = (char *)malloc(sizeof(*s) * (len + 1));
	if (p == 0)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (i >= start && k < len)
		{
			p[k] = s[i];
			k++;
		}
		i++;
	}
	p[k] = 0;
	return (p);
}
