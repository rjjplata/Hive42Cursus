/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:52:35 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 22:41:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	myfunction(unsigned int i, char *c)
{
	i = 32; 
	if (*c >= 'a' && *c <= 'z')
		*c = *c - i;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + i;
}

int	main()
{
	char	*str;
	
	printf("\n----------ft_striteri----------");
    	printf("\n**************************************************\n");
    	printf("Used function toupper/tolower for sample\n");
    	printf("Original String: LeRoN lErOn\n");
	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LeRoN lErOn");
	ft_striteri(str, myfunction);
	printf("Using ft_striteri: %s\n", str);
	free (str);
	printf("**************************************************\n");
}	
