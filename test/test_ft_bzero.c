/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:25:42 by root              #+#    #+#             */
/*   Updated: 2024/11/15 14:32:10 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	unsigned int	n;
	unsigned int	i;
	char	buf1[10];
	char	buf2[10];

	i = 0;
	n = 5;
	printf("\n----------ft_bzero----------");
	printf("\n**************************************************\n");
	ft_bzero(buf1, n);
	while (i < n)
	{
		printf("Element in position %u is : %d \n", i, buf1[i]);
		i++;
	}
	bzero(buf2, n);
	i = 0;
	while (i < n)
	{
		printf("Element in position %u is : %d \n", i, buf2[i]);
		i++;
	}
	printf("**************************************************\n");
}
