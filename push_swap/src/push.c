/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:11:59 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:50:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pushtoempty(int *arr_src, int *arr_dst, int *len_src, int *len_dst)
{
	int	i;

	if (*len_src == 0)
		return ;
	arr_dst[0] = arr_src[0];
	i = 0;
	while (i < (*len_src - 1))
	{
		arr_src[i] = arr_src[i + 1];
		i++;
	}
	arr_src[i] = 0;
	*len_src = *len_src - 1;
	*len_dst = *len_dst + 1;
}

void	ft_pushagaintob(int *arr_src, int *arr_dst, int *len_src, int *len_dst)
{
	int	i;

	i = *len_dst;
	while (i >= 1)
	{
		arr_dst[i] = arr_dst[i - 1];
		i--;
	}
	arr_dst[0] = arr_src[0];
	i = 0;
	while (i < *len_src - 1)
	{
		arr_src[i] = arr_src[i + 1];
		i++;
	}
	arr_src[i] = 0;
	*len_src -= 1;
	*len_dst += 1;
}

void	ft_push(int *arr_src, int *arr_dst, int *len_src, int *len_dst)
{
	if (*len_src == 0)
		return ;
	if (*len_dst != 0)
		ft_pushagaintob(arr_src, arr_dst, len_src, len_dst);
	else if (*len_dst == 0)
		pushtoempty(arr_src, arr_dst, len_src, len_dst);
}
