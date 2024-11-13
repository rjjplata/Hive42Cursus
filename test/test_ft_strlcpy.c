/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:32:56 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:42:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"
#include <stdio.h>

int main ()
{
    char str1[9] = "aabbccdd";
    char str2[9] = "efghi";

    printf("\n----------ft_strlcpy----------");
    printf("\n**************************************************\n");
    printf("The string: %s\n", str1);
    char result = ft_strlcpy(str1+2, str2, 3); //start after the 2nd character
    printf("New string: %d\n", result);
    printf("\nThe string: %s\n", str1);
    char result1 = ft_strlcpy(str1, str2, 5);
    printf("New string: %d\n", result1);
     printf("**************************************************\n");
}
