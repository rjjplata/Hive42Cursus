/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:53:46 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:49:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(int *arr_a, int *len_a)
{
	ft_revrotate(arr_a, len_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(int *arr_b, int *len_b)
{
	ft_revrotate(arr_b, len_b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	ft_revrotate(arr_a, len_a);
	ft_revrotate(arr_b, len_b);
	write(1, "rrr\n", 4);
}
