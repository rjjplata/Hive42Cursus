/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:47:59 by rplata            #+#    #+#             */
/*   Updated: 2024/12/02 16:04:52 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        i++;
    return (i);
}

char    *ft_strstr(char *fd, char *search)
{
    int i;
    int j;
    int len;

    i = 0;
    len = ft_strlen(search);
    if(!search)
        return (fd);
    while (fd[i] && j != len)
    {
        if (fd[i] == search[j])
            j++;
        else
            j = 0;
        i++;
    }
    if (j == len)
        return (fd + i);
    return (0);
}

char    *ft_getfirstline(char *fd)
{
    int     i;
    char    *result;

    i = 0;
    while (fd[i] != '\n' && fd[i] != '\0')
        i++;    //count till \n or \0
    result = malloc (i + 2);        //1 for \n and 1 for \0
    i = 0;
    while (fd[i] != '\n' && fd[i] != '\0')
    {
            result[i] = fd[i];   //copying
            i++;
    }
    result[i] = '\n';
    result[i + 1] = '\0';
    return (result);
}

char    *ft_fromtemp(char *fd, char *fdline)
{
    char    *result;
    char    *temp;

    if(!fdline)
    {
        result = ft_getfirstline(fd);
        return (result);
    }
    if(!ft_strstr(fd, fdline))
        return(0);
    temp = ft_strstr(fd, fdline);
    result = ft_getfirstline(temp);
}

char    *get_next_line(int fd)
{
    static char     *buffer;
    static char     *fdline;
    char    byte;
    char    *next_line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
        return (NULL);
    if (!fdline)
    {
        buffer = (char *)malloc(BUFFER_SIZE + 1);
        byte = read(fd, buffer, BUFFER_SIZE);
        buffer[byte + 1] = '\0';
    }
    fdline = ft_fromtemp(buffer, fdline);
    if(!fdline || fdline[0] == '\n')
    {
        free(buffer);
        return(0);
    }
    return (fdline);
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
