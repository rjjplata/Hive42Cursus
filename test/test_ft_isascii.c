/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:29:01 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:45:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <stdio.h>

char    ft_result(int a)
{
    char x;
    
    x = isascii(a);
    if (x > 0)
        return('1');
    else
        return('0');
}

int main ()
{
    char x = 127;
    char y = 54;
    char z = -1;
    char x1 = ft_isascii(x);
    char y1 = ft_isascii(y);
    char z1 = ft_isascii(z);
    char x2 = ft_result(x);
    char y2 = ft_result(y);
    char z2 = ft_result(z);
    
    printf("\n----------ft_isascii----------");
    printf("\n**************************************************\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    %c\n", x2);
    printf("The result:             %d\n", y1);
    printf("The expected result:    %c\n", y2);
    printf("The result:             %d\n", z1);
    printf("The expected result:    %c\n", z2);
    printf("**************************************************\n");
}
