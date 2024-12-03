/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:47:59 by rplata            #+#    #+#             */
/*   Updated: 2024/12/03 16:13:41 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\n')
		return ((char *)str);
	return (NULL);
}

static char    *ft_duplicate(char *fd)
{
    int     i;
    char    *result;

    i = 0;
    while (fd[i] != '\n' && fd[i] != '\0')
        i++;    //count till \n or \0
    result = (char *)malloc(i + 2);        //1 for \n and 1 for \0
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

static char    *ft_fromtemp(char *fd, char *fdline)
{
    char    *result;
    char    *temp;

    if(!fdline)
    {
        result = ft_duplicate(fd);
        return (result);
    }
    if(!ft_strchr(fd, '\n'))
        return(0);
    temp = ft_strchr(fd, '\n');
    result = ft_duplicate(temp);
    return (result);
}

char    *get_next_line(int fd)
{
    static char     *buffer;
    static char     *fdline;
    int    byte;
    char    *buff;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = (char *)malloc(BUFFER_SIZE + 1);
    if (!buffer)
            return (NULL);
    byte = read(fd, buffer, BUFFER_SIZE);
    if(byte < 0)
    {
        free(buffer);
        buffer = NULL;
        return (NULL);
    }
    buffer[byte] = '\0';
    fdline = ft_fromtemp(buffer, fdline);
    if (!fdline || (fdline[0] == '\n' && byte == 0))
    {
        free(buffer);
        buffer = NULL;
        return(NULL);
    }
    return (fdline);
}

int main() 
{
    int fd = open("tester.txt", O_RDONLY);
    if (fd == -1) 
    {
        perror("Error opening file");
        return 1;
    }
    char *line;
	int	i = 1;
    while ((line = get_next_line(fd)) != NULL) 
    {
        printf("Line %d: %s\n", i, line);
		i++;
        free(line);
    }
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }
    return 0;
}
