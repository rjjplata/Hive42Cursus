/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:40:51 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:33:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main ()
{
    char str1[20] = "--9";
    char str2[20] = "    -93745asd";
    char str3[20] = "+9524";
    char str4[20] = "  + 658";
    printf("\n----------ft_atoi----------");
    printf("\n**************************************************\n");
    printf("Using atoi: %d\n", atoi(str1));
    printf("Using ft_atoi: %d\n", ft_atoi(str1));
    printf("\nUsing atoi: %d\n", atoi(str2));
    printf("Using ft_atoi: %d\n", ft_atoi(str2));
    printf("\nUsing atoi: %d\n", atoi(str3));
    printf("Using ft_atoi: %d\n", ft_atoi(str3));
    printf("\nUsing atoi: %d\n", atoi(str4));
    printf("Using ft_atoi: %d\n", ft_atoi(str4));
    printf("**************************************************\n");
    return (0);
}