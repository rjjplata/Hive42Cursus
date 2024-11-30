#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif
char    *get_next_line(int fd)
{
    int     i;
    char    *strbuff;
    char    byte;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == 0)
        return (NULL);
    strbuff = (char *)malloc(sizeof(BUFFER_SIZE + 1))
    if (!strbuff)
    {
        free(strbuff);
        return(NULL);    
    }
    i = 0;
    x = BUFFER_SIZE;
    byte = read(fd, &c, 1);

}
   