/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:04:08 by root              #+#    #+#             */
/*   Updated: 2024/11/13 14:23:53 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int    ft_result(int a)
{
    int x;
    
    x = isalpha(a);
    return (x);
}

int main (void)
{
    char x = '1';
    char y = 'B';
    char z = 'z';
    char x1 = ft_isalpha(x);
    char y1 = ft_isalpha(y);
    char z1 = ft_isalpha(z);
    int x2 = ft_result(x);
    int y2 = ft_result(y);
    int z2 = ft_result(z);
    
    printf("\n----------ft_isalpha----------");
    printf("\n**************************************************\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    %d\n", x2);
    printf("The result:             %d\n", y1);
    printf("The expected result:    %d\n", y2);
    printf("The result:             %d\n", z1);
    printf("The expected result:    %d\n", z2);
    printf("**************************************************\n");
}
