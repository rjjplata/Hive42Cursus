/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:11:59 by root              #+#    #+#             */
/*   Updated: 2025/02/05 13:55:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pushtoempty(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	int	i;

	if (*len_a == 0)
		return ;
	arr_b[0] = arr_a[0];
	i = 0;
	while (i < (*len_a - 1))
	{
		arr_a[i] = arr_a[i + 1];
		i++;
	}
	arr_a[i] = 0;
	*len_a = *len_a - 1;
	*len_b = *len_b + 1;
}

void	ft_pushagaintob(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	int	i;

	i = *len_b;
	while (i >= 1)
	{
		arr_b[i] = arr_b[i - 1];
		i--;
	}
	arr_b[0] = arr_a[0];
	i = 0;
	while (i < *len_a - 1)
	{
		arr_a[i] = arr_a[i + 1];
		i++;
	}
	arr_a[i] = 0;
	*len_a -= 1;
	*len_b += 1;
}

void	ft_push(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	if (*len_a == 0)
		return ;
	if (*len_b != 0)
		ft_pushagaintob(arr_a, arr_b, len_a, len_b);
	else if (*len_b == 0)
		pushtoempty(arr_a, arr_b, len_a, len_b);
}
