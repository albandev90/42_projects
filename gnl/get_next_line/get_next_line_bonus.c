/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:10:50 by almedetb          #+#    #+#             */
/*   Updated: 2023/10/26 18:03:42 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
		s =ft_strjoin(tmp, bufr);
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
	static char	*st_ch[1024];
	char		*bufr;
	char		*line;

	bufr = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX || read(fd,
			bufr, 0) == -1 || fd > 1024)
	{
		if (st_ch[fd])
		{
			free(st_ch[fd]);
			st_ch[fd] = NULL;
		}
		return (NULL);
	}
	bufr = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!bufr)
		return (0);
	line = read_line(fd, bufr, st_ch[fd]);
	free(bufr);
	bufr = NULL;
	if (!line)
		return (NULL);
	st_ch[fd] = str_remaining(line);
	return (line);
}
