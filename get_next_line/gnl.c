#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif
char    *get_next_line(int fd)
{
    int byte;
    int i;
    int x;
    char c;
    char *strbuff;

    if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
        return (NULL);
    i = 0;
    strbuff = (char *)malloc(sizeof(BUFFER_SIZE + 1));
    if (!strbuff)
    {
        free(strbuff);
        return(NULL);
    }
    x = BUFFER_SIZE;
    byte = read(fd, &c, 1); // reads every character in the file
    while (byte != 0 && x > 0)
    {
        if (c == '\n' || c == EOF)
        {
            free(strbuff);
            break;
        }
        else
        {
            strbuff[i] = c;

        }
        byte = read(fd, &c, 1);
        x--;
        i++;
    }
    while (i == 0 || byte == 0)
    {
        free(strbuff);
        return(NULL);
    }
    strbuff[i] = '\0';
    return (strbuff);
}

int main(void)
{
    int     fd;
    int     i;
    char    *str;
    char    *path;

    path = "tester.txt";
    fd = open(path, O_RDONLY);
    i = 0;
    while (i < 20)
    {
        str = get_next_line(fd);
        printf("[%d] %s\n",i, str);
        i++;
        str = NULL;
    }
    close(fd);
    return(0);
}