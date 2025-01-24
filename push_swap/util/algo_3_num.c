/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:37:28 by root              #+#    #+#             */
/*   Updated: 2025/01/24 23:43:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	random3(int *array, int *length)
{
	int	i;

	if ((array_a_sort(array, length) == 1))
		return ;
	i = 0;
	if ((array[i + 1] < array[i]) && (array[i + 1] < array[i + 2]))
	{
		if (array[i] < array[i + 2])
			ft_sa(array, length);
		else if (array[i] > array[i + 2])
			ft_ra(array, length);
	}
	else if ((array[i + 1] > array[i] && array[i + 1] > array[i + 2]))
	{
		if (array[i] > array[i + 2])
			ft_rra(array, length);
		else if (array[i] < array[i + 2])
		{
			ft_sa(array, length);
			ft_ra(array, length);
		}
	}
	else if ((array[i + 2] < array[i + 1]) && (array[i + 1] < array[i]))
	{
		ft_sa(array, length);
		ft_rra(array, length);
	}
}