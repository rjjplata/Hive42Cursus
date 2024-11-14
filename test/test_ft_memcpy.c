/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:41:15 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:44:59 by root             ###   ########.fr       */
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
     //when overlap happens then it just ignore it
    char str1[18] = "Program";
    char str2[18] = "test";
    char str3[18] = "Program";
    char str4[18] = "test";
    char str5[6] = "abcde";
    char str6[3] = "abc";
    
    printf("\n----------ft_memcpy----------");
    printf("\n**************************************************\n");
    printf("str1 before memcpy:\n ");
    printf("%s\n", str1);
    memcpy(str1, str2, sizeof(str2));
    printf("str1 after memcpy:\n ");
    printf("%s\n", str1);
    printf("str3 before using ft_memcpy:\n ");
    printf("%s\n", str3);
    char *result = ft_memcpy(str3, str4, sizeof(str4));
    printf("str3 after using ft_memcpy:\n ");
    printf("%s\n", result);
    printf("**************************************************\n");
    printf("\n**************************************************\n");
    printf("This is a sample of overlap\n");
    printf("\nThe string: %s\n", str5);
    char *x = memcpy(str5 + 2, str6, 3);
    printf("%s\n", x);
 //   ft_memcpy(str5 + 2, str6, 3);
   // printf("New string: %s\n", str5);
    printf("**************************************************\n");
    return 0;
}
