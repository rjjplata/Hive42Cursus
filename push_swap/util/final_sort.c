/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:12:23 by root              #+#    #+#             */
/*   Updated: 2025/02/05 18:13:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(int *arr_a, int *len_a)
{
	int	min;
	int	i;

	min = get_min(arr_a, len_a);
	if (arr_a[0] != min)
	{
		i = 0;
		while (arr_a[0] != min && i < *len_a)
		{
			ft_ra(arr_a, len_a);
			i++;
		}
	}
}
