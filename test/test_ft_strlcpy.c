/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 02:32:56 by root              #+#    #+#             */
/*   Updated: 2024/11/09 10:39:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main ()
{
    char str1[9] = "aabbccdd";
    char str2[9] = "efghi";
    printf("\n**************************************************\n");
    printf("The string: %s\n", str1);
    char result = ft_strlcpy(str1+2, str2, 3); //start after the 2nd character
    printf("New string: %s\n", str1);
    printf("\nThe string: %s\n", str1);
    char result1 = ft_strlcpy(str1, str2, 5);
    printf("New string: %s\n", str1);
     printf("**************************************************\n");
}
