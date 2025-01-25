/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:34:30 by root              #+#    #+#             */
/*   Updated: 2025/01/25 16:17:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	random4_1(int *array, int *temparray, int *len_a, int *templength)
{
	int	i;
	int	max;

	max = get_max(array, len_a);
	i = 0;
	while (i < *len_a)
	{
		if (array[0] == max)
			ft_pb(array, temparray, len_a, templength);
		ft_ra(array, len_a);
		i++;
	}
}

void	random4(int *array, int *length)
{
	int	max;
	int	*temparray;
	int	templength;
	int	len;

	if ((array_a_sort(array, length) == 1))
		return ;
	templength = 0;
	len = *length;
	temparray = (int *)malloc(sizeof(int) * (len - 1));
	if (temparray == NULL)
		return ;
	max = get_max(array, length);
	random4_1(array, temparray, length, &templength);
	random3(array, length);
	ft_pa(array, temparray, length, &templength);
	free(temparray);
}
