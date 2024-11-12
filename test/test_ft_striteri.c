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

void	myfunction(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main()
{
	char	*str;
	
	printf("\n----------ft_striteri----------");
    printf("\n**************************************************\n");
	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LeRoN lErOn");
	ft_striteri(str, myfunction);
	printf("%s\n", str);
	printf("**************************************************\n");
}	
