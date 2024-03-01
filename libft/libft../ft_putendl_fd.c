/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:05:10 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/25 18:32:16 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor
//followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0' && fd > 0)
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
