/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mixed_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:34:02 by rplata            #+#    #+#             */
/*   Updated: 2025/02/05 22:38:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*mixed_input(int argc, char **argv)
{
	int		i;
	char	*temp;
	char	*str;

	i = 1;
	str = ft_strdup("");
	while (i < argc)
	{
		temp = str;
		str = ft_strjoin(temp, argv[i]);
		free (temp);
		if (i < (argc - 1))
		{
			temp = str;
			str = ft_strjoin(temp, " ");
			free (temp);
		}
		i++;
	}
	return (str);
}
