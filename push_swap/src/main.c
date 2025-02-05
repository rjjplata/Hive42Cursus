/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:02:04 by root              #+#    #+#             */
/*   Updated: 2025/01/27 15:44:44 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_argc3_2(char *str) //
{
	int		*array2;
	int		i;
	char	**strs;
	long	nbr;

	i = 0;
	int z = countsubstr(str);
	strs = ft_split(str, ' ');
	array2 = (int *)malloc(sizeof(int) * z);
	if (array2 == NULL)
		return ;
	while (i < z)
	{
		nbr = ft_atol(strs[i]);
		array2[i] = (int)nbr;
		i++;
	}
	dupe_checker(array2, z);
	free(array2);
}

static void	ft_argc3_1(int argc, char **argv)
{
	int	i;
	int x;
	int	result;

	i = 1;
	x = argc;
	result = 1;
	while (x > 1 && result == 1)
	{
		result = checkarg1(argv[i]);
		i++;
		x--;
	}
	if (result == 1)
	{
		char *str = mixed_input(argc, argv);
		ft_argc3_2(str);
	}
	else if (result == 0)
	{
		write(2, "Error", 5);
		write(2, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc >= 2)
		ft_argc3_1(argc, argv);
	return (0);
}
