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
    printf("The string 1: %s\n", str1);
    printf("The string 2: %s\n", str2);
    ft_strlcpy(str1+2, str2, 5); //start after the 2nd character
    printf("Using ft_strlcpy (str1 + 2): %s\n", str1);
    printf("**************************************************\n");
}
