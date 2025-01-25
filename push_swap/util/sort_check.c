/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:32:16 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:56:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ab_not_sorted(int *array, int *array2, int *len_a, int *len_b)
{
	if ((array[0] > array[1]) && (array2[0] < array2[1]))
	{
		ft_ss(array, array2, len_a, len_b);
		ft_rr(array, array2, len_a, len_b);
	}
	else if ((array[0] < array[1]) && (array2[0] > array2[1]))
		ft_rr(array, array2, len_a, len_b);
	else if (array[0] > array[1] && (array2[0] > array2[1]))
	{
		ft_sa(array, len_a);
		ft_rr(array, array2, len_a, len_b);
	}
	else if (array[0] < array[1] && (array2[0] < array2[1]))
	{
		ft_sb(array2, len_b);
		ft_rr(array, array2, len_a, len_b);
	}
}

void	a_not_sorted(int *array, int *len_a)
{
	if (array[0] > array[1])
		ft_sa(array, len_a);
	else if (array[0] < array[1])
		ft_ra(array, len_a);
}

void	b_not_sorted(int *array2, int *len_b)
{
	if (array2[0] < array2[1])
		ft_sb(array2, len_b);
	else if (array2[0] > array2[1])
		ft_rb(array2, len_b);
}
