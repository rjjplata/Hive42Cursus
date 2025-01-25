/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dupe_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:03:30 by root              #+#    #+#             */
/*   Updated: 2025/01/25 15:22:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	if (len_a == 2)
		random2(array, &len_a);
	if (len_a == 3)
		random3(array, &len_a);
	if (len_a == 4)
		random4(array, &len_a);
	if (len_a > 4)
		quick_sort1(array, array2, &len_a, &len_b);
	free(array2);
}
