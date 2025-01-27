/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:36:54 by root              #+#    #+#             */
/*   Updated: 2025/01/27 10:18:43 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min(int *array2, int *len_b)
{
	int	i;
	int	temp;

	if (*len_b <= 0)
		return (0);
	i = 1;
	temp = array2[0];
	while (i < *len_b)
	{
		if (array2[i] < temp)
			temp = array2[i];
		i++;
	}
	return (temp);
}
