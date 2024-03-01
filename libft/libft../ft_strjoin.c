/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:02:25 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 17:59:16 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*p;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (0);
	while (s1[i] != '\0')
	{
		p[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[j++] = s2[i++];
	}
	p[j] = '\0';
	return (p);
}
