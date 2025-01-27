/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:25:59 by root              #+#    #+#             */
/*   Updated: 2025/01/27 15:17:03 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	dosort_2(char **array, int argnbr)
{
	int	*array2;
	int	i;
	int	nbr;

	i = 0;
	array2 = (int *)malloc(sizeof(int) * argnbr);
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
	int		i;
	int		argnbr;
	char	**array;

	array = NULL;
	argnbr = countsubstr(str);
	if (argnbr == 1)
		return ;
	else if (argnbr != 1)
	{
		array = ft_split(str, ' ');
		dosort_2(array, argnbr);
		i = 0;
		while (array[i] != NULL)
		{
			free (array[i]);
			i++;
		}
		free (array);
	}
}
