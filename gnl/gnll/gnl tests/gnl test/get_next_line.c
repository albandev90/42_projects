/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:47:55 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/24 14:31:56 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_read(int fd)
{
	static char		*store;
	char			*line;
	char			buf[BUFFER_SIZE + 1];
	int				r;

	r = 1;
	while (r >= 0)
	{	
		r = read(fd, buf, BUFFER_SIZE);
		if (r <= 0 && !store)
			return (NULL);
		buf[r] = '\0';
		if (!store)
			store = ft_strdup("");
		store = ft_strjoin(store, buf);
		if (ft_find_n(store) == 1 || ((buf[0] == '\0') && store))
		{
			line = ft_lineout(store);
			store = ft_new_store(store);
			return (line);
		}
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*line_out;

	line_out = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line_out = ft_read(fd);
	return (line_out);
}