
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return ((char *)str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
    char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

static char	*ft_read(int fd, char *str)
{
	char	*line;
	int		len;

	line = malloc(BUFFER_SIZE + 1);
	if (!line)
		return (NULL);
	len = 1;
	while (!ft_strchr(str, '\n') && len)
	{
		len = read(fd, line, BUFFER_SIZE);
		if (len == -1)
		{
			free(line);
			return (NULL);
		}
		line[len] = '\0';
		str = ft_strjoin(str, line);
	}
	free(line);
	return (str);
}

static char	*ft_get_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n') // or
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')  // or
	{
		line[i] = str[i];  // copying of the character
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';	//should i  add an additional next line if i found next line at the end of the string??
	line[i] = '\0';
    	return (line);
}

static char *ft_get_rest(char *str)
{
    char *line;   // Pointer to hold the resulting string after extracting the rest of the input string.
    int i;        // Index to traverse the input string.
    int j;        // Index for the new string.
    int len;      // Length of the remaining part of the string after the newline.

    i = 0;  // Start with the first character of the input string.
    
    // Traverse the string until we find the newline character or reach the end.
    while (str[i] != '\0' && str[i] != '\n')
        i++;
    
    // If there's no newline (i.e., we reached the end of the string), free the input and return NULL.
    if (!str[i])
    {
        free(str);
        return (NULL);
    }

    // Calculate the length of the remaining part of the string after the newline character.
    len = ft_strlen(&str[i + 1]);

    // Allocate memory for the new string that will contain the remaining part.
    line = (char *)malloc(sizeof(char) * (len + 1)); // +1 for the null terminator.
    if (!line)
        return (NULL);  // If memory allocation fails, return NULL.

    j = 0;  // Start copying characters from the remaining part.
    i++;    // Move past the newline character.
    
    // Copy the remaining characters to the new string.
    while (str[i] != '\0')
        line[j++] = str[i++];

    // Null-terminate the new string.
    line[j] = '\0';

    // Free the original string (as its data is now copied to 'line').
    free(str);

    // Return the new string containing the rest of the input string after the newline.
    return (line);
}


char *get_next_line(int fd)
{
    static char *current_line;  // Static variable to keep track of the current data read
    char *line;  // Variable to store the line to be returned

    // Check for invalid input or a non-positive buffer size
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);  // Return NULL if there's an error with the input parameters

    // Read data from the file descriptor into 'current_line'
    current_line = ft_read(fd, current_line);

    // If no data was read or an error occurred, return NULL
    if (!current_line)
        return (NULL);

    // Get the next line from 'current_line'
    line = ft_get_line(current_line);

    // Update 'current_line' to point to the remaining data after the line
    current_line = ft_get_rest(current_line);

    // Return the line that was extracted
    return (line);
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
        i++;
        free(line);
    }
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }
    return 0;
}