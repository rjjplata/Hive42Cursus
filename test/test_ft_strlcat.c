/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:00:31 by root              #+#    #+#             */
/*   Updated: 2024/11/09 10:39:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <bsd/string.h>

int main ()
{
    char str1[50] = "aabbccdd";
    char str2[50] = "efghi";
    printf("\n**************************************************\n");
    printf("The string: %s\n", str1);
    char result = ft_strlcat(str1, str2, sizeof(str1));
    printf("New string: %s\n", str1);
     printf("**************************************************\n");
}