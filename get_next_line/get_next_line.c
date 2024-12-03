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
    size_t i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);
    char *dup = (char *)malloc(len + 1);
    if (!dup)
        return NULL;
    for (size_t i = 0; i < len; i++)
        dup[i] = s[i];
    dup[len] = '\0';
    return dup;
}

char *ft_strchr(const char *str, int c)
{
    if (!str)
        return (NULL);
    while (*str)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    return (c == '\0') ? (char *)str : NULL;
}

static char *ft_strjoin(char *s1, char *s2)
{
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *result = malloc(len1 + len2 + 1);
    if (!result)
        return NULL;
    
    for (size_t i = 0; i < len1; i++)
        result[i] = s1[i];
    for (size_t i = 0; i < len2; i++)
        result[len1 + i] = s2[i];
    result[len1 + len2] = '\0';

    free(s1); // free the first string
    return result;
}

char *get_next_line(int fd)
{
    static char *buffer = NULL;
    char temp[BUFFER_SIZE + 1];
    char *line = NULL;
    ssize_t bytesRead = 0;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    // Initialize the buffer on the first call
    if (!buffer)
        buffer = malloc(1);
    buffer[0] = '\0';

    while ((bytesRead = read(fd, temp, BUFFER_SIZE)) > 0)
    {
        temp[bytesRead] = '\0'; // Null-terminate the read buffer
        buffer = ft_strjoin(buffer, temp); // Concatenate the new data
        if (ft_strchr(temp, '\n'))
            break;
    }

    if (bytesRead < 0 || (bytesRead == 0 && buffer[0] == '\0'))
    {
        free(buffer);
        buffer = NULL;
        return NULL; // End of file or error
    }

    // Process the line
    char *newline_pos = ft_strchr(buffer, '\n');
    if (newline_pos)
    {
        size_t line_length = newline_pos - buffer + 1; // Include the newline
        line = malloc(line_length + 1);
        if (!line)
            return NULL;
        for (size_t i = 0; i < line_length; i++)
            line[i] = buffer[i];
        line[line_length] = '\0'; // Null-terminate the string
        
        // Shift the buffer to remove the processed line
        char *remaining = ft_strdup(newline_pos + 1);
        free(buffer);
        buffer = remaining;
    }
    else if (buffer && buffer[0] != '\0') // If there's no newline but data in buffer
    {
        line = ft_strdup(buffer);
        free(buffer);
        buffer = NULL;
    }

    return line;
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
    int i = 1;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line %d: %s", i, line);
        i++;
        free(line);
    }
    
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }
    
    return 0;
}