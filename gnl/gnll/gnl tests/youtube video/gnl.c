
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char const *str)
{
	int i;

	i=0;
	while(str[i])
		i++;
	return (i);
}


char    *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;

	i=0;
	j=0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

int get_next_line(int fd, char **line)
{
	char buf[10 + 1];
	int bytes_read;

	while ((bytes_read = read(fd, buf, 10))) 
	{
		buf[bytes_read] = '\0';
		*line = ft_strjoin(*line, buf);
	}
	return (0);
}

int main(void)
{
	char *line;
	int fd;

	fd = open("random.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
}
