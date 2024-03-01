/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:24:02 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/19 21:24:03 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		len_s1;

	len_s1 = ft_strlen(s1);
	dest = malloc((len_s1 + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, len_s1);
	dest[len_s1] = '\0';
	return (dest);
}
