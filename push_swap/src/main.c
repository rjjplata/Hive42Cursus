/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:02:04 by root              #+#    #+#             */
/*   Updated: 2025/01/25 18:52:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_argc3_2(int i, char **argv)
{
	int		*array2;
	int		j;
	long	nbr;
	int		argnbr;

	j = 1;
	array2 = (int *)malloc(sizeof(int) * i);
	if (array2 == NULL)
		return ;
	while (i > j)
	{
		nbr = ft_atol(argv[j]);
		array2[j - 1] = (int)nbr;
		j++;
	}
	argnbr = i - 1;
	dupe_checker(array2, argnbr);
	free(array2);
}

static void	ft_argc3_1(int argc, char **argv)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (argc > 1 && result == 1)
	{
		result = checkarg1(argv[i]);
		i++;
		argc--;
	}
	if (result == 1)
		ft_argc3_2(i, argv);
	else if (result == 0)
	{
		write(2, "Error", 5);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		result = checkarg1(argv[1]);
		if (result == 1)
			dosort_1(argv[1]);
		else if (result == 0)
		{
			write(2, "Error", 5);
			write(1, "\n", 1);
		}
	}
	if (argc >= 3)
		ft_argc3_1(argc, argv);
	return (0);
}
