/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:51:02 by root              #+#    #+#             */
/*   Updated: 2025/01/25 22:44:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(int *arr_a, int *len_a)
{
	ft_swap(arr_a, len_a);
	write(1, "sa\n", 3);
}

void	ft_sb(int *arr_b, int *len_b)
{
	ft_swap(arr_b, len_b);
	write(1, "sb\n", 3);
}

void	ft_ss(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
	ft_swap(arr_a, len_a);
	ft_swap(arr_b, len_b);
	write(1, "ss\n", 3);
}
