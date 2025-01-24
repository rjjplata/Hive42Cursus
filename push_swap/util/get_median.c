/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_median.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:39:07 by root              #+#    #+#             */
/*   Updated: 2025/01/24 22:56:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	odd_or_even(int length)
{
	int	result;

	if (length % 2 == 0)
		result = length / 2;
	else
		result = (length / 2) + 1;
	return (result);
}

static void	copy_array(int *array, int *temp, int length)
{
	int	i;

	i = 0;
	while (i <= (length - 1))
	{
		temp[i] = array[i];
		i++;
	}
}

int	get_median_2(int *array, int length)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	get_median(int *array, int length)
{
	int	num;
	int	median;
	int	*temparray;

	temparray = (int *)malloc(sizeof(int) * length);
	if (temparray == NULL)
		return (0);
	copy_array(array, temparray, length);
	num = odd_or_even(length);
	get_median_2(temparray, length);
	median = temparray[num - 1];
	free(temparray);
	return (median);
}
