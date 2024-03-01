/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:47:16 by almedetb          #+#    #+#             */
/*   Updated: 2023/10/15 19:04:08 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*first_line(int fd, char *buf, char *s)
{
	int		bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		buf[bytes_read] = '\0';
		if (!s)
			s = ft_strdup("");
		temp = s;
		s = ft_strjoin(temp, buf);
		free(temp);
		temp = NULL;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (s);
}

char	*store_remaining(char *line)
{
	size_t	i;
	char	*str_rem;

	i = 0;
	if (line[i] == '\0' || line[1] == '\0')
		return (0);
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	str_rem = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*str_rem == '\0')
	{
		free(str_rem);
		str_rem = NULL;
	}
	if (line[i])
		line[i + 1] = '\0';
	return (str_rem);
}

char	*get_next_line(int fd)
{
	static char	*s;
	char		*buf;
	char		*line;

	buf = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX || read(fd,
			buf, 0) == -1)
	{
		if (s)
		{
			free(s);
			s = NULL;
		}
		return (NULL);
	}
	buf = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	line = first_line(fd, buf, s);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	s = store_remaining(line);
	return (line);
}
