/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:30:44 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:56:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	countsubstr(char const *str)
{
	unsigned int	count;
	int				i;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && (str[i] != '\0'))
			i++;
		if (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
		{
			i++;
			count++;
		}
		while (str[i] != ' ' && (str[i] >= '0' && str[i] <= '9'))
			i++;
	}
	return (count);
}
