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

int main ()
{
	char	**result;
	int		cur;

	printf("\n----------ft_split----------");
	printf("\n**************************************************\n");
	printf("Hello World    !! :\n");
	result = ft_split("Hello World    !!", ' ');
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);
	printf("\naaaa bbbb..cccc .dddd!!eeee :\n");
	result = ft_split("aaaa bbbb..cccc .dddd!!eeee", '.');
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);
	printf("**************************************************\n");
}
