/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:41:40 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:42:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main ()
{
    char x[] = "IKnowNothing";
    char y[] = "Hello";
    char z[] = "";
    char x1 = ft_strlen(x);
    char y1 = ft_strlen(y);
    char z1 = ft_strlen(z);
    char x2 = strlen(x);
    char y2 = strlen(y);
    char z2 = strlen(z);

    printf("\n----------ft_strlen----------");
    printf("\n**************************************************\n");
    printf("String: IKnowNothing\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    %d\n", x2);
    printf("String: Hello\n");
    printf("The result:             %d\n", y1);
    printf("The expected result:    %d\n", y2);
    printf("String: (NULL)\n");
    printf("The result:             %d\n", z1);
    printf("The expected result:    %d\n", z2);
    printf("**************************************************\n");
}
