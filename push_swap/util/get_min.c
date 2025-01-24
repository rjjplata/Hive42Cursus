/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:36:54 by root              #+#    #+#             */
/*   Updated: 2025/01/24 22:37:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min(int *array2, int *lengthB)
{
	int	i;
	int	temp;

	if (*lengthB <= 0)
		return (0);
	i = 1;
	temp = array2[0];
	while (i < *lengthB)
	{
		if (array2[i] < temp)
			temp = array2[i];
		i++;
	}
	return (temp);
}
