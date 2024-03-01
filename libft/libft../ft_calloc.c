/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:09:14 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 18:08:35 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//contiguously allocates enough space for count objects that are size 
//bytes of memory each and returns a pointer to the allocated memory. 
//The allocated memory is filled with bytes of value zero.

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;

	if (size && INT_MAX / size < count)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// int	main(void)
// {
// 	int i;
// 	i = 0;
// 	char *str = ft_calloc(56, 20);
// 	while (i <= 20)
// 	{
// 		str[i] = i;
// 		printf("%d\n", str[i]);
// 		i++;
// 	}
// }