/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:23:51 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:45:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int main ()
{
    char str1[] = "Authentic";
    char str2[] = "Auth";
    char str3[] = "Authentic";
    char str4[] = "Auth";
    
    printf("\n----------ft_memcmp----------");
    printf("\n**************************************************\n");
    printf("Word 1: Authentic\n");
    printf("Word 2: Auth\n");
    printf("Using memchr: %d\n", memcmp(str1, str2, 10));
    printf("Using ft_memchr: %d\n", (ft_memcmp(str3, str4, 10)));
    printf("**************************************************\n");
    return (0);
}
