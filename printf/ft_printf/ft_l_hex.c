/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:40:32 by almedetb          #+#    #+#             */
/*   Updated: 2023/08/21 19:38:49 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//converts decimal number to hexadecimal number and prints it
//recursive function divides until number is 0.
//converting int to char 26 line

#include "ft_printf.h"

void	ft_putnbr_lhex(unsigned int nb)
{
	if (nb / 16 > 0)
		ft_putnbr_lhex(nb / 16);
	if ((nb % 16) >= 10 && (nb % 16) < 16)
		ft_putchar((nb % 16) + 87);
	else
		ft_putchar((nb % 16) + 48);
}

//returns lengh of hexadecimal 

int	ft_l_hex(unsigned int j)
{
	int				len;

	len = 0;
	ft_putnbr_lhex(j);
	if (j == 0)
		len = 1;
	while (j)
	{
		j = j / 16;
		len++;
	}
	return (len);
}
