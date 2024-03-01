/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:05:19 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/05 13:05:38 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.
//ft_striteri modifies the original string IN PLACE using the same function f.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}
