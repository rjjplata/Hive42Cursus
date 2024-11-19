/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 03:04:04 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:44:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int main ()
{
    char str1[16] = "LiberatingThing";
    char str2 = 'i';
    char str3[16] = "LiberatingThing";
    char str4 = 'i';

    printf("\n----------ft_strrchr----------");
    printf("\n**************************************************\n");
    printf("String: LiberatingThing | Char: i\n");
    printf("Using strchr: %s\n", strrchr(str1, str2));
    printf("Using ft_strchr: %s\n", ft_strrchr(str3, str4));
    printf("**************************************************\n");
    return (0);
}
