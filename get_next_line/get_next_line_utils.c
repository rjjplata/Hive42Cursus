#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 2
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
		s1 = (char *)malloc(1 * sizeof(char));
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

char	*ft_read(int fd, char *str)
{
	char	*line;
	int		len;

	line = malloc(1 + BUFFER_SIZE);
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
		str = ft_strjoin(str, line);	}
	free(line);
	return (str);
}

 char	*ft_get_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
    	return (line);
}

char	*ft_get_rest(char *str)
{
	char	*line;
	int		i;
	int		j;
	int		len;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	len = ft_strlen(&str[i + 1]);
	line = (char *)malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	j = 0;
	i++;
	while (str[i] != '\0')
		line[j++] = str[i++];
	line[j] = '\0';
	free(str);
	return (line);
}
char	*get_next_line(int fd)
{
	static char	*current_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	current_line = ft_read(fd, current_line);
	if (!current_line)
		return (NULL);
	line = ft_get_line(current_line);
	current_line = ft_get_rest(current_line);
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