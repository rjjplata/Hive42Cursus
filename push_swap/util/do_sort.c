/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:25:59 by root              #+#    #+#             */
/*   Updated: 2025/01/24 23:05:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	dosort_2(char **array, int argnbr)
{
	int	*array2;
	int	i;
	int	nbr;

	i = 0;
	array2 = (int *)malloc(sizeof(int) * (argnbr - 1));
	if (array2 == NULL)
		return ;
	while (argnbr > (i))
	{
		nbr = ft_atol(array[i]);
		array2[i] = (int)nbr;
		i++;
	}
	dupe_checker(array2, argnbr);
	free(array2);
}

void	dosort_1(char *str)
{
	int		argnbr;
	char	**array;

	array = NULL;
	argnbr = countsubstr(str);
	if (argnbr == 1)
	{
		printf("Error!");
		return ;
	}
	else if (argnbr != 1)
	{
		array = ft_split(str, ' ');
		dosort_2(array, argnbr);
	}
}
