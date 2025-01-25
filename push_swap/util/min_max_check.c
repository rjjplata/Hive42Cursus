/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:39:57 by root              #+#    #+#             */
/*   Updated: 2025/01/25 14:50:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	min_max(int *array, int *array2, int *lengthA, int *lengthB)
{
	int	min;
	int	max;

	max = get_max(array, lengthA);
	min = get_min(array2, lengthB);
	if (array[0] == max && array2[0] == min)
		ft_rr(array, array2, lengthA, lengthB);
	if (array[0] == max && array2[0] != min)
		ft_ra(array, lengthA);
	if (array2[0] == min && array[0] != max)
		ft_rb(array2, lengthB);
}
