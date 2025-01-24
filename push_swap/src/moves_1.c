/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:51:02 by root              #+#    #+#             */
/*   Updated: 2025/01/24 21:58:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(int *arrayA, int *lengthA)
{
	ft_swap(arrayA, lengthA);
	write(1, "sa\n", 3);
}

void	ft_sb(int *arrayB, int *lengthB)
{
	ft_swap(arrayB, lengthB);
	write(1, "sb\n", 3);
}

void	ft_ss(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
	ft_swap(arrayA, lengthA);
	ft_swap(arrayB, lengthB);
	write(1, "ss\n", 3);
}
