/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:55:43 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:48:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	ft_push(arr_a, arr_b, len_a, len_b);
	write(1, "pb\n", 3);
}

void	ft_pa(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	ft_push(arr_b, arr_a, len_b, len_a);
	write(1, "pa\n", 3);
}
