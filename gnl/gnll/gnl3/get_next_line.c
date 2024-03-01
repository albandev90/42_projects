/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:05:43 by almedetb          #+#    #+#             */
/*   Updated: 2023/10/19 18:43:24 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_line(int fd, char *bufr, char *s)
{
	int		bytes_read;
	char	*tmp;

	bytes_read = 1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, bufr, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		bufr[bytes_read] = '\0';
		if (!s)
			s = ft_strdup("");
		tmp = s;
		s = ft_strjoin(tmp, bufr);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(bufr, '\n'))
			break ;
	}
	return (s);
}

char	*str_remaining(char *full_line)
{
	size_t	i;
	char	*p;

	i = 0;
	if (full_line[i] == '\0' || full_line[1] == '\0')
		return (0);
	while (full_line[i] != '\n' && full_line[i] != '\0')
		i++;
	p = ft_substr(full_line, i + 1, ft_strlen(full_line) - i);
	if (*p == '\0')
	{
		free(p);
		p = NULL;
	}
	if (full_line[i])
		full_line[i + 1] = '\0';
	return (p);
}

char	*get_next_line(int fd)
{
	static char	*st_ch;
	char		*bufr;
	char		*line;

	bufr = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX || read(fd,
			bufr, 0) == -1)
	{
		if (st_ch)
		{
			free(st_ch);
			st_ch = NULL;
		}
		return (NULL);
	}
	bufr = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!bufr)
		return (0);
	line = read_line(fd, bufr, st_ch);
	free(bufr);
	bufr = NULL;
	if (!line)
		return (NULL);
	st_ch = str_remaining(line);
	return (line);
}