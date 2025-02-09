/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:43:39 by root              #+#    #+#             */
/*   Updated: 2024/12/06 21:22:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(int fd, char *str)
{
	char	*line;
	int		len;

	line = (char *)malloc(BUFFER_SIZE + 1);
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
		if (!str)
			return(NULL);
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
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	line = (char *)malloc(i + 2);
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

static char	*ft_get_remaining(char *str)
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
	if (!line)
		return (NULL);
	current_line = ft_get_remaining(current_line);
	if (!current_line)
		return (NULL);
	return (line);
}
