/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:23:19 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/06 17:31:00 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//writes n nul to the string s.  If n is zero, bzero() does nothing.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
