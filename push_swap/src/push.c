/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:11:59 by root              #+#    #+#             */
/*   Updated: 2025/01/24 19:54:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pushtoempty(int *arrSRC, int *arrDST, int *lenSRC, int *lenDST)
{
	int	i;

	if (*lenSRC == 0)
		return ;
	arrDST[0] = arrSRC[0];
	i = 0;
	while (i < (*lenSRC - 1))
	{
		arrSRC[i] = arrSRC[i + 1];
		i++;
	}
	arrSRC[i] = 0;
	*lenSRC = *lenSRC - 1;
	*lenDST = *lenDST + 1;
}

void	ft_pushagaintob(int *arrSRC, int *arrDST, int *lenSRC, int *lenDST)
{
	int	i;

	i = *lenDST;
	while (i >= 1)
	{
		arrDST[i] = arrDST[i - 1];
		i--;
	}
	arrDST[0] = arrSRC[0];
	i = 0;
	while (i < *lenSRC - 1)
	{
		arrSRC[i] = arrSRC[i + 1];
		i++;
	}
	arrSRC[i] = 0;
	*lenSRC -= 1;
	*lenDST += 1;
}

void	ft_push(int *arrSRC, int *arrDST, int *lenSRC, int *lenDST)
{
	if (*lenSRC == 0)
		return ;
	if (*lenDST != 0)
		ft_pushagaintob(arrSRC, arrDST, lenSRC, lenDST);
	else if (*lenDST == 0)
		pushtoempty(arrSRC, arrDST, lenSRC, lenDST);
}
