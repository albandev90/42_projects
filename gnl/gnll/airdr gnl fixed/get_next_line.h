
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

int		ft_strlen(const char *str);
int		ft_find_n(char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*first_line(char *str);
char	*store_remaining(char *str);

#endif
