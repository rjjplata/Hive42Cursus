/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:50:32 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 22:20:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	mapi(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main (void)
{
	char	*str;
	char	*strmapi;
	
	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "FrEe StUdIeS");
	strmapi = ft_strmapi(str, &mapi);
	printf("%s\n", strmapi);
	if (strmapi == str)
		printf("\nA new string was not returned");
	if (strmapi[13] != '\0')
		printf("\nString is not null terminated");
	return (0);
}

