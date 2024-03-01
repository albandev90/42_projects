
#include "get_next_line.h"

static char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_read(int fd)
{
	static char	*store;
	char		*line;
	char		buffer[BUFFER_SIZE + 1];
	int			bytes_read;

	// store = malloc(BUFFER_SIZE + 2);
	bytes_read = 1;
	while (bytes_read >= 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0 && !store)
			return (NULL);
		buffer[bytes_read] = '\0';
		if (!store)
			store = ft_strdup("");
		store = ft_strjoin(store, buffer);
		if ((ft_find_n(store) == 1 || buffer[0] == '\0') && store)
		{
			line = first_line(store);
			store = store_remaining(store);
			return (line);
		}
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
		return (NULL);
	line = ft_read(fd);
	return (line);
}
