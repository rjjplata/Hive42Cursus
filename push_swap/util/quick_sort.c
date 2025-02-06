/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:25:37 by root              #+#    #+#             */
/*   Updated: 2025/02/05 23:30:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	quick_sort3(int *array, int *array2, int *len_a, int *len_b)
{
	int	len;

	len = *len_b;
	while (len > 0)
	{
		ft_pa(array, array2, len_a, len_b);
		len--;
	}
}

void	quick_sort2(int *array, int *array2, int *len_a, int *len_b)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (i < ((*len_a + *len_b)))
	{
		min_max(array, array2, len_a, len_b);
		if ((array_a_sort(array, len_a) == 0) && (array_b_sort(array2,
					len_b) == 0))
			ab_not_sorted(array, array2, len_a, len_b);
		else if ((array_a_sort(array, len_a) == 0) && (array_b_sort(array2,
					len_b) == 1))
			a_not_sorted(array, len_a);
		else if ((array_a_sort(array, len_a) == 1) && (array_b_sort(array2,
					len_b) == 0))
			b_not_sorted(array2, len_b);
		i++;
	}
	a = array_a_sort(array, len_a);
	b = array_b_sort(array2, len_b);
	if (a == 0 || b == 0)
		quick_sort2(array, array2, len_a, len_b);
	quick_sort3(array, array2, len_a, len_b);
}

void	quick_sort1(int *array, int *array2, int *len_a, int *len_b)
{
	int	median;
	int	i;
	int	j;

	if ((array_a_sort(array, len_a) == 1))
		return ;
	j = *len_a;
	i = 0;
	median = get_median(array, j);
	while (i <= (j - 1))
	{
		if (array[0] < median)
			ft_pb(array, array2, len_a, len_b);
		else if (array[0] >= median)
			ft_ra(array, len_a);
		i++;
	}
	quick_sort2(array, array2, len_a, len_b);
}
