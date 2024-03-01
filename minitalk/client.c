/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:51:52 by almedetb          #+#    #+#             */
/*   Updated: 2024/01/04 17:39:31 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sending(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit <= 7)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep (100);
		bit++;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		while (av[2][i] != '\0')
		{
			sending(pid, av[2][i]);
			i++;
		}
		sending(pid, '\n');
	}
	else
	{
		write (1, "error, wrong format\n", 20);
		write (1, "use: ./client <PID> <MESSAGE>\n", 30);
		return (1);
	}
	return (0);
}
