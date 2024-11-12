/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:44:21 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:45:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

char    ft_result(int a)
{
    int x;
    
    x = isprint(a);
    if (x > 0)
        printf("1");
    else
        printf("0");
}

int main ()
{
    char x = 126;
    char y = -1;
    char z = 'Y';
    char x1 = ft_isprint(x);
    char y1 = ft_isprint(y);
    char z1 = ft_isprint(z);
    char x2 = ft_result(x);
    char y2 = ft_result(y);
    char z2 = ft_result(z);
    
    printf("\n----------ft_isprint----------");
    printf("\n**************************************************\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    %c\n", x2);
    printf("The result:             %d\n", y1);
    printf("The expected result:    %c\n", y2);
    printf("The result:             %d\n", z1);
    printf("The expected result:    %c\n", z2);
    printf("**************************************************\n");
}