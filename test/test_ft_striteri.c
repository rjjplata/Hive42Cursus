/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:52:35 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 13:05:23 by rplata           ###   ########.fr       */
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
	
	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LeRoN lErOn");
	ft_striteri(str, myfunction);
	printf("%s\n", str);
}	
