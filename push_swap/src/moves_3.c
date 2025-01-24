/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:53:43 by root              #+#    #+#             */
/*   Updated: 2025/01/24 21:56:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(int *arrayA, int *lengthA)
{
	ft_rotate(arrayA, lengthA);
	write(1, "ra\n", 3);
}

void	ft_rb(int *arrayB, int *lengthB)
{
	ft_rotate(arrayB, lengthB);
	write(1, "rb\n", 3);
}

void	ft_rr(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
	ft_rotate(arrayA, lengthA);
	ft_rotate(arrayB, lengthB);
	write(1, "rr\n", 3);
}
