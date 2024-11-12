/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:04:08 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:45:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

char    ft_result(int a)
{
    int x;
    
    x = isalpha(a);
    if (x > 0)
        printf("1");
    else
        printf("0");
}

int main ()
{
    char x = '1';
    char y = 'B';
    char z = 'z';
    char x1 = ft_isalpha(x);
    char y1 = ft_isalpha(y);
    char z1 = ft_isalpha(z);
    char x2 = ft_result(x);
    char y2 = ft_result(y);
    char z2 = ft_result(z);
    
    printf("\n----------ft_isalpha----------");
    printf("\n**************************************************\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    %c\n", x2);
    printf("The result:             %d\n", y1);
    printf("The expected result:    %c\n", y2);
    printf("The result:             %d\n", z1);
    printf("The expected result:    %c\n", z2);
    printf("**************************************************\n");
}
