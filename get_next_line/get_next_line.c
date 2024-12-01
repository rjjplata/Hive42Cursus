#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

int ft_strlen(char *buffer)
{
    int i;

    i = 0;
    while(buffer[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    ft_copy(char *newbuff, char *buffer)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (buffer[i] != '\0')
    {
        if (buffer[i] == '\n')
        {
            buffer[j++] = '\n'; // copy \n
            buffer[j] = '\0'; // append \0
            return;
        }
        newbuff[j++] = buffer[i++];
    }
    newbuff[i] = '\0';
    return(newbuff);
}
char    ft_fillnewline(char *buffer)
{
    char *newbuff;
    int len;

    if (!buffer)
        return;         //return null
    len = ft_strlen(buffer);
    newbuff = malloc(len + 1);
    if (!newbuff)
        return (NULL);      //return null
    ft_copy(newbuff, buffer);
    free(buffer);               //free buffer malloc
    return (*newbuff);
}

void    ft_findend(int fd)
{
    int byte;
    char *buff;
    char    *buffer;

    byte = read(fd, &buffer, 1);
    while (byte > 0)
    {
        if(fd !< 0)
            buff = malloc(BUFFER_SIZE + 1);
        if(!buff)
            return (NULL); //
        byte = read(fd, buffer, BUFFER_SIZE);
        if (!byte)
        {
            free(buff);
            return (NULL);
        }
        buff[byte] = '\n';
        ft_fillnewline(buff)
    }
    free(buff);
}

char    *get_next_line(int fd)
{
    char    *buffer;
    char    byte;
    char    *next_line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
        return (NULL);
    while (byte > 0)
    {
        if(byte == '\n' || byte == 0)
            return (NULL);
        next_line = ft_findend(fd); //search for '\n'
    }
    return (0);
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