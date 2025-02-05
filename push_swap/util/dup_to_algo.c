/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_to_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:03:30 by root              #+#    #+#             */
/*   Updated: 2025/02/05 19:52:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	dupe_checker(int *array, int argnbr)
{
	int i;	// to delete
	int	*array2;
	int	len_a;
	int	len_b;

	i = 0; // to delete
	len_a = argnbr;
	len_b = 0;
	if (find_dup(array, argnbr) == 1)
		return ;
	array2 = (int *)malloc(sizeof(int) * argnbr);
	if (array2 == NULL)
		return ;
	if (len_a == 1)
		return ;
	if (len_a == 2)
		random2(array, &len_a);
	if (len_a == 3)
		random3(array, &len_a);
	if (len_a == 4)
		random4(array, &len_a);
	if (len_a > 4 && len_a < 20)
		quick_sort1(array, array2, &len_a, &len_b);
	if (len_a >= 20)
	{
		push_and_sortb(array, array2, &len_a, &len_b);
		quick_sort3(array, array2, &len_a, &len_b);
		final_sort(array, &len_a);
	}
	while (i < argnbr)
	{
		printf("Element[%i] = %i\n", i, array[i]);
		i++;
	}
	free(array2);
}