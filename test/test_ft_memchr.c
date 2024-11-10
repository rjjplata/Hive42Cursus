/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:48:34 by root              #+#    #+#             */
/*   Updated: 2024/11/09 14:14:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main ()
{
    const char str1[] = "Pinoy";
    const char str2 = 'i';
    const char str3[] = "Pinoy";
    const char str4 = 'i';
    printf("\n**************************************************\n");
    printf("Using memchr: %s\n", ((char*)memchr(str1, str2, 4)));
    printf("Using ft_memchr: %s\n", ((char*)ft_memchr(str3, str4, 4)));
    printf("**************************************************\n");
    return (0);
}
