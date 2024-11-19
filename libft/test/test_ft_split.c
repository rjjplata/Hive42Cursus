/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:08:22 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:40:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main (void)
{
	char	**tab;
	int	i;
	
	i = 0;
	printf("\n----------ft_split----------");
	printf("\n**************************************************\n");
	tab = ft_split("Wall Wextra Werror	CheckDefine", ' ');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		free (tab[i]);
		i++;
	}
	printf("**************************************************\n");
	free(tab);
	return (0);
}
