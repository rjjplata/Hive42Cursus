/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:22:39 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:44:53 by root             ###   ########.fr       */
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
 //when overlap it starts with initial char
 //   char str3[30] = "LearningIsHard";
 //   char str4[30] = "LearningIsHard";
    char str5[5] = "abcde";
    char str6[3] = "abc";
    
    printf("\n----------ft_memmove----------");
    printf("\n**************************************************\n");
    printf("This is a sample of overlap\n");
 //   printf("\nThe string: %s\n", str3);
  //  ft_memmove(str3 + 5, str4, 14);
 //   printf("New string: %s\n", str3);
    printf("\nThe string: %s\n", str5);
    ft_memmove(str5 + 2, str6, 3);
    printf("New string: %s\n", str5);
    printf("**************************************************\n");
}
