/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:08:17 by root              #+#    #+#             */
/*   Updated: 2025/02/05 22:44:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

static char	**checksplit(char *str, char c, char **result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == c)
			i++;
		j = i;
		while (str[i] && ((str[i] == '+' || str[i] == '-') || (str[i] >= '0'
					&& str[i] <= '9')))
			i++;
		if (i > j)
		{
			result[k] = (char *)malloc(sizeof(char) * (i - j) + 1);
			if (result == NULL)
				return (result);
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = NULL;
	return (result);
}

char	**ft_split(char *str, char c)
{
	char	**result;
	size_t	count;

	if (!str)
		return (NULL);
	count = countsubstr(str);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	checksplit (str, c, result);
	return (result);
}
