/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:20:36 by root              #+#    #+#             */
/*   Updated: 2025/01/24 19:47:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_revrotate(int *array, int *length)
{
	int	i;
	int	temp;

	i = *length - 1;
	temp = array[i];
	while (i >= 1)
	{
		array[i] = array[i - 1];
		i--;
	}
	array[0] = temp;
	return ;
}

void	ft_rotate(int *array, int *length)
{
	int	i;
	int	temp;

	i = 0;
	temp = array[0];
	while (i != (*length - 1))
	{
		array[i] = array[i + 1];
		i++;
	}
	array[*length - 1] = temp;
	return ;
}