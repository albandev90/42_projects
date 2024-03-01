
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stat_a;
	char		*b;
	char		*c;

	b = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX || read(fd,
			b, 0) == -1)
	{
		if (stat_a)
		{
			free(stat_a);
			stat_a = NULL;
		}
		return (NULL);
	}
	b = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!b)
		return (0);
	c = first_line(fd, b, stat_a);
	free(b);
	b = NULL;
	if (!c)
		return (NULL);
	stat_a = store_remaining(c);
	return (c);
}
