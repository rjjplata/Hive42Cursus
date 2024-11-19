/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:44:12 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:44:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main ()
{
    char x;
    char y;
    char z;
    
    x = 78;
    y = 'B';
    z = 'z';
    char x1 = ft_toupper(x);
    char y1 = ft_toupper(y);
    char z1 = ft_toupper(z);

    printf("\n----------ft_toupper----------");
    printf("\n**************************************************\n");
    printf("Example 1: 78\n");
    printf("The result:             %c\n", x1);
    printf("The expected result:    %c\n", toupper(x));
    printf("Example 2: %c\n", y);
    printf("The result:             %c\n", y1);
    printf("The expected result:    %c\n", toupper(y));
    printf("Example 3: %c\n", z);
    printf("The result:             %c\n", z1);
    printf("The expected result:    %c       ", toupper(z));
    printf("\n**************************************************\n");
}	
