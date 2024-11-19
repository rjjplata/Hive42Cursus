/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:32:19 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:45:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main ()
{
    char x = '1';
    char y = 'B';
    char z = '9';
    char x1 = ft_isdigit(x);
    char y1 = ft_isdigit(y);
    char z1 = ft_isdigit(z);
    
    printf("\n----------ft_isdigit----------");
    printf("\n**************************************************\n");
    printf("The result:             %d\n", x1);
    printf("The expected result:    1\n");
    printf("The result:             %d\n", y1);
    printf("The expected result:    0\n");
    printf("The result:             %d\n", z1);
    printf("The expected result:    1\n");
    printf("**************************************************\n");
}
