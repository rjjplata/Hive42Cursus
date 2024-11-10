/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 01:43:43 by root              #+#    #+#             */
/*   Updated: 2024/11/09 10:38:53 by root             ###   ########.fr       */
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
    char x[] = "aaaabb";
    char y[] = "aaaabc";
    char a[] = "aaaabc";
    char b[] = "aaaabb";
    char c[] = "aaaa";
    char d[] = "aaaa";
    printf("\n**************************************************\n");
    printf("The result:             %d\n", ft_strncmp(x, y, 6));
    printf("The expected result:    %d\n", strncmp(x, y, 6));
    printf("The result:             %d\n", ft_strncmp(a, b, 6));
    printf("The expected result:    %d\n", strncmp(a, b, 6));
    printf("The result:             %d\n", ft_strncmp(c, d, 4));
    printf("The expected result:    %d\n", strncmp(c, d, 4));
    printf("**************************************************\n");
}