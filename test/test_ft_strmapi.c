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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	mapi(unsigned int i, char c)
{
	i = i;
	c = c - 32;
	return (c);
}

int	main (void)
{
	char	*str;
//	char	*strmapi;
	
	printf("\n----------ft_strmapi----------");
	str = (char *)malloc(sizeof(*str) * 5);
	strcpy(str, "free");
	ft_strmapi(str, &mapi);
	printf("%s\n", str);
	free(str);
	
	return (0);
}

