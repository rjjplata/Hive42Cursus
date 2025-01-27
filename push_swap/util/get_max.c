/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:56:38 by root              #+#    #+#             */
/*   Updated: 2025/01/27 10:18:40 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max(int *array, int *len_a)
{
	int	i;
	int	temp;

	if (*len_a <= 0)
		return (0);
	i = 1;
	temp = array[0];
	while (i < *len_a)
	{
		if (array[i] > temp)
			temp = array[i];
		i++;
	}
	return (temp);
}
