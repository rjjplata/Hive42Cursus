#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 3
#endif

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
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

char *ft_strjoin(char *s1, const char *s2)
{
    if (!s1)
        return ft_strdup(s2);
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *new_str = (char *)malloc(len1 + len2 + 1);
    if (!new_str)
        return NULL;
    for (size_t i = 0; i < len1; i++)
        new_str[i] = s1[i];
    for (size_t i = 0; i < len2; i++)
        new_str[len1 + i] = s2[i];
    new_str[len1 + len2] = '\0';
    free(s1);  // free the old string
    return new_str;
}

char *get_next_line(int fd)
{
    static char *buffer = NULL;  // static buffer to hold data between calls
    char temp[BUFFER_SIZE + 1];  // temporary buffer for reading
    char *line = NULL;  // to store the line to return
    ssize_t bytes_read;
    char *newline_pos;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    while (1)
    {
        if (buffer == NULL || (newline_pos = strchr(buffer, '\n')) == NULL)
        {
            // Read more data if we don't have a newline
            bytes_read = read(fd, temp, BUFFER_SIZE);
            if (bytes_read <= 0)
            {
                // If we read nothing, return the current buffer or NULL if it's empty
                if (buffer && *buffer)
                {
                    line = ft_strdup(buffer);
                    free(buffer);
                    buffer = NULL;
                    return line;
                }
                free(buffer);
                buffer = NULL;
                return NULL;
            }
            temp[bytes_read] = '\0';  // Null-terminate the temp buffer
            buffer = ft_strjoin(buffer, temp);  // Append new data to the buffer
        }
        
        // Now we have the buffer with at least one line or it's empty
        newline_pos = ft_strchr(buffer, '\n');
        if (newline_pos)
        {
            size_t line_length = newline_pos - buffer + 1;
            line = (char *)malloc(line_length + 1);
            if (!line)
                return NULL;
            strncpy(line, buffer, line_length);
            line[line_length] = '\0';  // Null-terminate the line
            char *new_buffer = ft_strdup(newline_pos + 1);
            free(buffer);
            buffer = new_buffer;
            return line;
        }
    }
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
        printf("Line %d: %s\n", i, line);
        free(line);
        i++;
    }

    if (close(fd) == -1)
    {
        perror("Error closing file");
        return 1;
    }
    return 0;
}