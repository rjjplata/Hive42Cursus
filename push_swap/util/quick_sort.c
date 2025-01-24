/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:25:37 by root              #+#    #+#             */
/*   Updated: 2025/01/24 23:28:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	quick_sort3(int *array, int *array2, int *lengthA, int *lengthB)
{
	int	len;
	int	i;

	len = *lengthB;
	while (len > 0)
	{
		ft_pa(array, array2, lengthA, lengthB);
		len--;
	}
	i = 0;
	len = *lengthA;
	while (i < len)
	{
		printf("Element [%i] = %i\n", i, array[i]);
		i++;
	}
}

void	quick_sort2(int *array, int *array2, int *lengthA, int *lengthB)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (i < ((*lengthA + *lengthB)))
	{
		min_max(array, array2, lengthA, lengthB);
		if ((array_a_sort(array, lengthA) == 0) && (array_b_sort(array2,
					lengthB) == 0))
			ab_not_sorted(array, array2, lengthA, lengthB);
		else if ((array_a_sort(array, lengthA) == 0) && (array_b_sort(array2,
					lengthB) == 1))
			a_not_sorted(array, lengthA);
		else if ((array_a_sort(array, lengthA) == 1) && (array_b_sort(array2,
					lengthB) == 0))
			b_not_sorted(array2, lengthB);
		i++;
	}
	a = array_a_sort(array, lengthA);
	b = array_b_sort(array2, lengthB);
	if (a == 0 || b == 0)
		quick_sort2(array, array2, lengthA, lengthB);
	quick_sort3(array, array2, lengthA, lengthB);
}

void	quick_sort1(int *array, int *array2, int *lengthA, int *lengthB)
{
	int	median;
	int	i;
	int	j;

	j = *lengthA;
	i = 0;
	if ((array_a_sort(array, lengthA) == 1))
		return ;
	median = get_median(array, j);
	while (i <= (j - 1))
	{
		if (array[0] < median)
			ft_pb(array, array2, lengthA, lengthB);
		else if (array[0] >= median)
			ft_ra(array, lengthA);
		i++;
	}
	quick_sort2(array, array2, lengthA, lengthB);
}
