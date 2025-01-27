/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:39:57 by root              #+#    #+#             */
/*   Updated: 2025/01/27 10:18:43 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	min_max(int *array, int *array2, int *len_a, int *len_b)
{
	int	min;
	int	max;

	max = get_max(array, len_a);
	min = get_min(array2, len_b);
	if (array[0] == max && array2[0] == min)
		ft_rr(array, array2, len_a, len_b);
	if (array[0] == max && array2[0] != min)
		ft_ra(array, len_a);
	if (array2[0] == min && array[0] != max)
		ft_rb(array2, len_b);
}
