/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:21:31 by rplata            #+#    #+#             */
/*   Updated: 2024/11/15 13:52:35 by rplata           ###   ########.fr       */
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
	int	*ptr;

	printf("\n----------ft_calloc----------");
	printf("\n**************************************************\n");
	ptr = (int *)ft_calloc(3, 3);
	if (ptr == NULL)
		printf("Null pointer \n");
	else
		printf("Address = %p\n", (void *)ptr);
	printf("**************************************************\n");
	free(ptr);
	return (0);
}
