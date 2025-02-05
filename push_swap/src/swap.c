/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:19:34 by root              #+#    #+#             */
/*   Updated: 2025/02/05 18:20:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(int *array, int *length)
{
	int	temp;

	if (*length <= 1)
		return ;
	else
	{
		temp = array[0];
		array[0] = array[1];
		array[1] = temp;
	}
}
