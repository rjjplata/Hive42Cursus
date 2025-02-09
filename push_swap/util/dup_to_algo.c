/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_to_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:03:30 by root              #+#    #+#             */
/*   Updated: 2025/02/06 17:14:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	algo_selector(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	if (*len_a == 2)
		random2(arr_a, len_a);
	if (*len_a == 3)
		random3(arr_a, len_a);
	if (*len_a == 4)
		random4(arr_a, len_a);
	if (*len_a > 4 && *len_a < 20)
		quick_sort1(arr_a, arr_b, len_a, len_b);
	if (*len_a >= 20)
	{
		push_and_sortb(arr_a, arr_b, len_a, len_b);
		quick_sort3(arr_a, arr_b, len_a, len_b);
		final_sort(arr_a, len_a);
	}
}

void	dupe_checker(int *array, int argnbr)
{
	int	*array2;
	int	len_a;
	int	len_b;

	len_a = argnbr;
	len_b = 0;
	if (find_dup(array, argnbr) == 1)
		return ;
	array2 = (int *)malloc(sizeof(int) * argnbr);
	if (array2 == NULL)
		return ;
	if (len_a == 1)
	{
		free(array2);
		return ;
	}
	algo_selector(array, array2, &len_a, &len_b);
	free(array2);
}
