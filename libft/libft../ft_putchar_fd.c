/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:38:23 by almedetb          #+#    #+#             */
/*   Updated: 2023/11/05 19:31:08 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The character to output.
// The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the character ’c’ to the given file
// descriptor.

//A file descriptor is a numeric value that represents an open file, device, 
//or input/output stream in a computer program. It allows the program to 
//read from or write to the associated resource without dealing with 
//low-level details.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
		write (fd, &c, 1);
}
