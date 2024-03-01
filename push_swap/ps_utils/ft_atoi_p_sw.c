/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_p_sw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:13:25 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 16:13:27 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_p_sw(char *s, char **final_av, int *arr, int index)
{
	long	result;
	int		flag;

	result = 0;
	flag = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s++ == '-')
			flag = -1;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		result *= 10;
		result += *s++ - '0';
	}
	if (ft_isdigit(*s) == 0 && *s)
		free_error_complex(arr, final_av, index);
	if (result > INT_MAX && flag == 1)
		free_error_complex(arr, final_av, index);
	if (((result - 1) > INT_MAX) && flag == -1)
		free_error_complex(arr, final_av, index);
	result *= flag;
	return (result);
}
