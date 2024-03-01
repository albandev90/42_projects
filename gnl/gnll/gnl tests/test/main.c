
#include "get_next_line.h"

int main(void)
{
    char *str;
    int fd;
    int i = 1;

    fd = open("sample.txt", O_RDONLY);
    str = get_next_line(fd);
    while (str)
    {
        printf("line(%d)%s",i++ ,str);
        free(str);
        str = get_next_line(fd);
    }
    free(str);
    // str = get_next_line(fd);
    // printf("%s", str);
    // free(str);
    // str = get_next_line(fd);
    // printf("%s", str);
    // free(str);
}
