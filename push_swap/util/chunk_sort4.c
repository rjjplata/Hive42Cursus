/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:48:50 by root              #+#    #+#             */
/*   Updated: 2025/02/05 13:48:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	chunk_sort4_1(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	int	i;
	int	max;

	max = get_max(arr_b, len_b);
	i = 0;
	while (arr_b[0] != max && i < *len_b)
	{
		ft_rb(arr_b, len_b);
		i++;
	}
	ft_pb(arr_a, arr_b, len_a, len_b);
}

static void	chunk_sort4_2(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	int	i;
	int	max;

	max = get_max(arr_b, len_b);
	i = 0;
	while ((arr_b[0] != max) && i < *len_b)
	{
		ft_rrb(arr_b, len_b);
		i++;
	}
	ft_pb(arr_a, arr_b, len_a, len_b);
}

static void	chunk_sort4_3(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	int	i;

	i = 0;
	while (arr_b[0] > arr_a[0] && i < *len_b)
	{
		ft_rb(arr_b, len_b);
		i++;
	}
	while ((arr_a[0] > arr_b[*len_b - 1] || arr_a[0] < arr_b[0]) && i < *len_b)
	{
		ft_rrb(arr_b, len_b);
		i++;
	}
	ft_pb(arr_a, arr_b, len_a, len_b);
}

void	chunk_sort4(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	int	max;
	int	min;

	max = get_max(arr_b, len_b);
	min = get_min(arr_b, len_b);
	if (arr_a[0] < min)
		chunk_sort4_1(arr_a, arr_b, len_a, len_b);
	else if (arr_a[0] > max && (!(arr_a[0] < max && arr_a[0] > min)))
		chunk_sort4_2(arr_a, arr_b, len_a, len_b);
	else if (arr_a[0] < max && arr_a[0] > min)
		chunk_sort4_3(arr_a, arr_b, len_a, len_b);
}
