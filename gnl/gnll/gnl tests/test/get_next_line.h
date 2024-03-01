
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *store, char *bufr);
char	*first_line(char *src);
char	*store_remaining(char *str);
int		ft_find_n(char *str);

#endif
