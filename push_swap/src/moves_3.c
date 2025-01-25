/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:53:43 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:47:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(int *arr_a, int *len_a)
{
	ft_rotate(arr_a, len_a);
	write(1, "ra\n", 3);
}

void	ft_rb(int *arr_b, int *len_b)
{
	ft_rotate(arr_b, len_b);
	write(1, "rb\n", 3);
}

void	ft_rr(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	ft_rotate(arr_a, len_a);
	ft_rotate(arr_b, len_b);
	write(1, "rr\n", 3);
}
