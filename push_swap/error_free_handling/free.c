/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:38:51 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 14:17:51 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
}

void	free_final_argv(char **final_av)
{
	int	i;

	i = 0;
	while (final_av[i] != NULL)
	{
		free(final_av[i]);
		i++;
	}
	free(final_av);
}

void	free_final_argv_2(char **final_av, int index)
{
	int	size;

	size = getting_final_size(final_av);
	while (index < size)
	{
		free(final_av[index]);
		index++;
	}
	free(final_av);
}

void	free_complex(int *arr, char **final_av)
{
	free(arr);
	free(final_av);
}

void	free_complex_2(int *arr, char **final_av, int index)
{
	free(arr);
	free_final_argv_2(final_av, index);
}
