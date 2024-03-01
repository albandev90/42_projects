
// #include "get_next_line.h"

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("samplefile.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	// free(line);
// 	// line = get_next_line(fd);
// 	// printf("%s", line);
// 	// free(line);
// 	// line = get_next_line(fd);
// 	return (0);
// }

// int main()
// {
// 	char *str;
// 	int fd;

// 	fd = open("samplefile.txt", O_RDONLY);

// 	while((str = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", str);
// 		free(str);
// 	}
// 	return (0);
// }