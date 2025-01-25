/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:37:28 by root              #+#    #+#             */
/*   Updated: 2025/01/25 14:41:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	random3_1(int *array, int *length)
{
	int	i;

	i = 0;
	if (array[i] < array[i + 2])
		ft_sa(array, length);
	else if (array[i] > array[i + 2])
		ft_ra(array, length);
}

static void	random3_2(int *array, int *length)
{
	int	i;

	i = 0;
	if (array[i] > array[i + 2])
		ft_rra(array, length);
	else if (array[i] < array[i + 2])
	{
		ft_sa(array, length);
		ft_ra(array, length);
	}
}

static void	random3_3(int *array, int *length)
{
	ft_sa(array, length);
	ft_rra(array, length);
}

void	random3(int *array, int *length)
{
	int	i;

	if ((array_a_sort(array, length) == 1))
		return ;
	i = 0;
	if ((array[i + 1] < array[i]) && (array[i + 1] < array[i + 2]))
	{
		random3_1(array, length);
	}
	else if ((array[i + 1] > array[i] && array[i + 1] > array[i + 2]))
	{
		random3_2(array, length);
	}
	else if ((array[i + 2] < array[i + 1]) && (array[i + 1] < array[i]))
		random3_3(array, length);
}
