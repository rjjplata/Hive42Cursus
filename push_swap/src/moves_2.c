/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:55:43 by root              #+#    #+#             */
/*   Updated: 2025/01/24 21:58:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
	ft_push(arrayA, arrayB, lengthA, lengthB);
	write(1, "pb\n", 3);
}

void	ft_pa(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
	ft_push(arrayB, arrayA, lengthB, lengthA);
	write(1, "pa\n", 3);
}
