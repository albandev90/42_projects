/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:36:55 by almedetb          #+#    #+#             */
/*   Updated: 2023/12/04 15:07:24 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receiving(int signalnum)
{
	static int	bits;
	static char	c;

	if (signalnum == SIGUSR1)
		c = c | (1 << bits);
	bits++;
	if (bits == 8)
	{
		write(1, &c, 1);
		bits = 0;
		c = 0;
	}
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		write(1, "error, wrong format\n", 20);
		write(1, "use: ./server\n", 14);
		return (0);
	}
	write(1, "PID: ", 5);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	while (ac == 1)
	{
		signal(SIGUSR1, receiving);
		signal(SIGUSR2, receiving);
		pause();
	}
	return (0);
}
