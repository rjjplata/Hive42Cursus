/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:32:16 by root              #+#    #+#             */
/*   Updated: 2025/01/24 23:33:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ab_not_sorted(int *array, int *array2, int *lengthA, int *lengthB)
{
	if ((array[0] > array[1]) && (array2[0] < array2[1]))
	{
		ft_ss(array, array2, lengthA, lengthB);
		ft_rr(array, array2, lengthA, lengthB);
	}
	else if ((array[0] < array[1]) && (array2[0] > array2[1]))
		ft_rr(array, array2, lengthA, lengthB);
	else if (array[0] > array[1] && (array2[0] > array2[1]))
	{
		ft_sa(array, lengthA);
		ft_rr(array, array2, lengthA, lengthB);
	}
	else if (array[0] < array[1] && (array2[0] < array2[1]))
	{
		ft_sb(array2, lengthB);
		ft_rr(array, array2, lengthA, lengthB);
	}
}

void	a_not_sorted(int *array, int *lengthA)
{
	if (array[0] > array[1])
		ft_sa(array, lengthA);
	else if (array[0] < array[1])
		ft_ra(array, lengthA);
}

void	b_not_sorted(int *array2, int *lengthB)
{
	if (array2[0] < array2[1])
		ft_sb(array2, lengthB);
	else if (array2[0] > array2[1])
		ft_rb(array2, lengthB);
}
