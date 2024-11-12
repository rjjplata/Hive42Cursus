/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:40:22 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:44:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main ()
{
    char buf1[] = "C programming memset function";
    char buf2[] = "C programming memset function";
    
    printf("\n----------ft_memset----------");
    printf("\n**************************************************\n");
    printf("Before:         %s\n", buf1);
    memset( buf1, '#', 5 );
    printf( "After memset:   %s\n", buf1);
    char *result = ft_memset(buf2, '#', 5);
    printf("ft_memset:      %s\n", result);
    printf("**************************************************\n");
    return (0);
}