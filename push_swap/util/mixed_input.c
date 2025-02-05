/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mixed_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:34:02 by rplata            #+#    #+#             */
/*   Updated: 2025/02/05 20:41:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*mixed_input(int argc, char **argv)
{
	int		i;
	char	*temp;
	char	*temp1;
	char	*str;

	i = 1;
	temp = (char *)malloc(sizeof(char) * 1);
	str = " ";
	while (argc > 1)
	{
		temp = ft_strjoin(temp, argv[i]);
		temp = ft_strjoin(temp, str);
		temp1 = temp;
		free(temp);
		argc--;
		i++;
	}
	return (temp1);
}
