/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:13:46 by root              #+#    #+#             */
/*   Updated: 2025/02/05 18:14:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	scan_chunk_top(int *arr_a, int *chunk, int *len_a, int chunk_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < *len_a)
	{
		j = 0;
		while (j < chunk_len)
		{
			if (arr_a[i] == chunk[j])
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

int	scan_chunk_bottom(int *arr_a, int *chunk, int *len_a, int chunk_len)
{
	int	i;
	int	j;

	i = *len_a - 1;
	while (i > 0)
	{
		j = 0;
		while (j < chunk_len)
		{
			if (arr_a[i] == chunk[j])
				return (i);
			j++;
		}
		i--;
	}
	return (-1);
}
