
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
	static char	*store;
	char		*line;
	char		buf[BUFFER_SIZE + 1];
	int			r;

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
		if ((ft_find_n(store) == 1 || buf[0] == '\0') && store)
		{
			line = first_line(store);
			store = store_remaining(store);
			return (line);
		}
		if (*store == '\0')
		{
			free (store);
			store = NULL;
			return (NULL);
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
