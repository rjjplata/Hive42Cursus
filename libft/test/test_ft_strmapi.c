/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:50:32 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 22:42:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	mapi(unsigned int i, char c)
{
	i = i;
	c = c - 32;
	return (c);
}

int	main (void)
{
	char	*str;
	
	printf("\n----------ft_strmapi----------");
	printf("\n**************************************************\n");
//	strcpy(str, "libag");
	str = ft_strmapi("libag", mapi);
	printf("%s\n", str);
	printf("**************************************************\n");
	free(str);
	
	return (0);
}

