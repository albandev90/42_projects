/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:38:45 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:59:05 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	error_2(char *str, char **final_argv)
{
	free(str);
	free(final_argv);
	ft_printf("Error\n");
	exit(1);
}

void	free_error_complex(int *arr, char **final_av, int index)
{
	free_complex_2(arr, final_av, index);
	error();
}
