
#include "get_next_line.h"

int main(void)
{
    char *str;
    int fd;

    fd = open("file.txt", O_RDONLY);
    str = get_next_line(fd);
    printf("%s", str);
    free(str);

    str = get_next_line(fd);
    printf("%s", str);
    free(str);

    str = get_next_line(fd);
    printf("%s", str);
    free(str);
}
