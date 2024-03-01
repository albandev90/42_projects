/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:28:29 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 15:54:54 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prelim_check(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			if (ft_strlen(av[i]) == 0 || space_checking(av[i]) == 1)
				error();
			i++;
		}
	}
}

void	prep_sort(t_node *a, t_node *b, char **final_av, int size)
{
	int		*arr;
	int		i;

	arr = malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
	{
		arr[i] = ft_atoi_p_sw(final_av[i], final_av, arr, i);
		free(final_av[i]);
	}
	i = size - 1;
	while (i >= 0)
		push(&a, arr[i--], 0, 0);
	set_ind(&a);
	if (checking_dublic(arr, size) == 1)
	{
		free_complex(arr, final_av);
		free_list(&a);
		error();
	}
	sorting_int_arr(arr, size);
	setting_pos(&a, arr, size);
	free_complex(arr, final_av);
	sorting(a, b, size);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		size;
	char	**final_av;

	a = NULL;
	b = NULL;
	prelim_check(ac, av);
	checking_params(av);
	final_av = getting_final_av(ac, av);
	free_argv(av);
	if (!final_av)
		return (0);
	size = getting_final_size(final_av);
	prep_sort(a, b, final_av, size);
	return (0);
}
