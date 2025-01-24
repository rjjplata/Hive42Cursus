/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:53:46 by root              #+#    #+#             */
/*   Updated: 2025/01/24 21:56:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(int *arrayA, int *lengthA)
{
	ft_revrotate(arrayA, lengthA);
	write(1, "rra\n", 4);
}

void	ft_rrb(int *arrayB, int *lengthB)
{
	ft_revrotate(arrayB, lengthB);
	write(1, "rrb\n", 4);
}

void	ft_rrr(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
	ft_revrotate(arrayA, lengthA);
	ft_revrotate(arrayB, lengthB);
	write(1, "rrr\n", 4);
}
