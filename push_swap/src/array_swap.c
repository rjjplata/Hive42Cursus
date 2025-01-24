/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:11:59 by root              #+#    #+#             */
/*   Updated: 2025/01/24 17:39:38 by root             ###   ########.fr       */
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

void ft_pushToEmpty(int *arraySRC, int *arrayDST, int *lengthSRC, int *lengthDST)
{
    int i;

    if(*lengthSRC == 0)
        return;
    arrayDST[0] = arraySRC[0];
    i = 0;
    while (i < (*lengthSRC - 1))
    {
        arraySRC[i] = arraySRC[i + 1];
        i++;
    }
    arraySRC[i] = 0;
    *lengthSRC = *lengthSRC - 1;
    *lengthDST = *lengthDST + 1;
}

void ft_push(int *arraySRC, int *arrayDST, int *lengthSRC, int *lengthDST) 
{
    int i;

    if(*lengthSRC == 0)
        return;
    if (*lengthDST != 0)
    {
        i = *lengthDST;
        i = *lengthDST;
        while(i >= 1)
        {
        arrayDST[i] = arrayDST[i - 1];
        i--;
        }
        arrayDST[0] = arraySRC[0];
        i = 0;
        while (i < *lengthSRC - 1)
        {
            arraySRC[i] = arraySRC[i + 1];
            i++;
        }
        arraySRC[i] = 0;
        *lengthSRC -= 1;
        *lengthDST += 1;
    }
    else if (*lengthDST == 0)
        ft_pushToEmpty(arraySRC, arrayDST, lengthSRC, lengthDST);
}


void ft_revrotate(int *array, int *length)
{
    int i;
    int temp;

    i = *length - 1;
    temp = array[i];
    while (i >= 1) 
    {
        array[i] = array[i - 1];
        i--;  
    }
    array[0] = temp;
    return;
}

void ft_rotate(int *array, int *length)
{
    int i;
    int temp;

    i = 0;
    temp = array[0];
    while (i != (*length - 1))
    {
        array[i] = array[i + 1];
        i++;  
    }
    array[*length-1] = temp;
    return; 
}