/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:58:40 by root              #+#    #+#             */
/*   Updated: 2025/01/27 15:17:08 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_dup(int *arr, int length)
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (arr[i] == arr[j])
			{
				write (2, "Error", 5);
				write (2, "\n", 1);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	array_b_sort(int *arr, int *length)
{
	int	i;

	i = 1;
	if (*length == 0 || *length == 1)
		return (0);
	while (i < *length)
	{
		if (arr[i - 1] < arr[i])
			return (0);
		i++;
	}
	return (1);
}

int	array_a_sort(int *arr, int *length)
{
	int	i;

	i = 1;
	if (*length == 0 || *length == 1)
		return (0);
	while (i < *length)
	{
		if (arr[i - 1] > arr[i])
			return (0);
		i++;
	}
	return (1);
}
