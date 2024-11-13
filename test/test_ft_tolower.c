/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:50:53 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:43:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main ()
{
    char x = 78;
    char y = 'B';
    char z = 'z';
    char x1 = ft_tolower(x);
    char y1 = ft_tolower(y);
    char z1 = ft_tolower(z);

    printf("\n----------ft_tolower----------");
    printf("\n**************************************************\n");
    printf("Example 1: %c\n", x);
    printf("The result:             %c\n", x1);
    printf("The expected result:    %c\n", tolower(x));
    printf("Example 2: %c\n", y);
    printf("The result:             %c\n", y1);
    printf("The expected result:    %c\n", tolower(y));
    printf("Example 3: %c\n", z);
    printf("The result:             %c\n", z1);
    printf("The expected result:    %c       ", tolower(z));
    printf("\n**************************************************\n");
}
