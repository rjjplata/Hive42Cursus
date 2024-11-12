/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:56:06 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:45:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

char    ft_result(int a)
{
    char x;
    
    x = isalnum(a);
    if (x > 0)
        printf("1");
    else
        printf("0");
}

int main ()
{
    char x = '*';
    char y = 'B';
    char z = 'z';
    char x1 = ft_isalnum(x);
    char y1 = ft_isalnum(y);
    char z1 = ft_isalnum(z);
    char x2 = ft_result(x);
    char y2 = ft_result(y);
    char z2 = ft_result(z);
    
    printf("\n----------ft_isalnum----------");
    printf("\n**************************************************\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    %c\n", x2);
    printf("The result:             %d\n", y1);
    printf("The expected result:    %c\n", y2);
    printf("The result:             %d\n", z1);
    printf("The expected result:    %c\n", z2);
    printf("**************************************************\n");
}
