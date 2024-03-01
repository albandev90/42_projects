/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:12:40 by almedetb          #+#    #+#             */
/*   Updated: 2024/02/20 16:12:42 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getting_final_size(char **final_av)
{
	int	i;

	i = 0;
	while (final_av[i])
		i++;
	return (i);
}

int	space_checking(char *s)
{
	int		i;
	int		sym_num;

	i = 0;
	sym_num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			sym_num++;
		i++;
	}
	if (ft_strlen(s) == sym_num)
		return (1);
	return (0);
}

char	**make_arr(int ac, char **av)
{
	int		i;
	char	*str;
	char	**arr;

	str = NULL;
	i = 1;
	if (ac == 2)
		arr = ft_split(av[i], ' ');
	else
	{
		while (i < ac)
		{
			str = ft_strjoin_gnl(str, av[i]);
			str = ft_strjoin_gnl(str, " ");
			i++;
		}
		arr = ft_split(str, ' ');
		free(str);
	}
	return (arr);
}

char	**getting_final_av(int ac, char **av)
{
	int		i;
	char	**result;

	i = 1;
	while (av[i])
	{
		if (space_checking(av[i]) == 0)
			av[i] = ft_strtrim(av[i], " ");
		i++;
	}
	if (ac == 2)
	{
		if (ft_isdigit(av[1][0]) == 0 &&
				av[1][0] != '-' && av[1][0] != '+')
			error();
	}
	result = make_arr(ac, av);
	return (result);
}

void	checking_params(char **av)
{
	int	i;
	int	k;

	i = 0;
	while (av[++i] != NULL)
	{
		k = -1;
		while (av[i][++k])
		{
			if (ft_isdigit(av[i][k]) == 0)
			{
				if (av[i][k] != '+' && av[i][k] != '-' && av[i][k] != ' ')
					error();
				if (ft_strlen(av[i]) == 1 && (av[i][k] == '+'
					|| av[i][k] == '-'))
					error();
				if ((av[i][k] == '+' || av[i][k] == '-') &&
						(av[i][k + 1] == '\0' || av[i][k + 1] == '+' ||
							av[i][k + 1] == '-' || av[i][k + 1] == ' '))
					error();
			}
		}
	}
}
