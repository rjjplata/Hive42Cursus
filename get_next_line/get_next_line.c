#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char    *get_next_line(int fd)
{
    int byte;
    int i;
    int x;
    char c;
    char *strbuff;

    if (fd < 0)
        return (NULL);
    i = 0;
    strbuff = (char *)malloc(10000000);
    if (!strbuff)
    {
        free(strbuff);
        return(NULL);
    }
    byte = read(fd, &c, 1); // reads every character in the file
    while (byte > 0)
    {
        if (c == '\n' || c == EOF)
            break;
        else
            strbuff[i] = c;
            i++;
            x--;
        byte = read(fd, &c, 1);
    }
    while (i == 0 || byte < 0)
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
        printf("[%i] %s\n",i, str);
        i++;
    }
    close(fd);
    return(0);
}