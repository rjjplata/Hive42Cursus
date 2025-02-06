/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:02:04 by root              #+#    #+#             */
/*   Updated: 2025/02/06 14:33:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	*initstack(size_t size)
{
	int	*array2;

	array2 = (int *)malloc(sizeof(int) * size);
	if (!array2)
		return (NULL);
	return (array2);
}

static void	returnoverflowerror(int i, char **strs, char *str, int *array2)
{
	write(2, "Error\n", 6);
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	free(str);
	free(array2);
	return ;
}

static void	ft_argc3_2(char *str, int z)
{
	int		*array2;
	int		i;
	char	**strs;
	long	nbr;

	i = 0;
	strs = ft_split(str, ' ');
	array2 = initstack(z);
	while (i < z)
	{
		nbr = ft_atol(strs[i]);
		if (!(nbr <= INT_MAX && nbr >= INT_MIN))
		{
			returnoverflowerror(i, strs, str, array2);
			return ;
		}
		array2[i] = (int)nbr;
		free(strs[i]);
		i++;
	}
	free(str);
	free(strs);
	dupe_checker(array2, z);
	free(array2);
}

static void	ft_argc3_1(int argc, char **argv)
{
	int		i;
	int		result;
	int		z;
	char	*str;

	i = 0;
	result = 1;
	while (i > (argc - 1) && result == 1)
	{
		result = checkarg1(argv[i]);
		i++;
	}
	if (result == 1)
	{
		str = mixed_input(argc, argv);
		if (checkarg1(str) == 0)
		{
			write(2, "Error\n", 6);
			return ;
		}
		z = countsubstr(str);
		ft_argc3_2(str, z);
	}
	else if (result == 0)
		write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc >= 2)
		ft_argc3_1(argc, argv);
	return (0);
}
