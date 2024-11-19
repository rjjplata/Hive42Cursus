/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:43:40 by root              #+#    #+#             */
/*   Updated: 2024/11/12 22:40:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int main ()
{
    char str1[10] = "Actuation";
    char str2 = 'i';

    printf("\n----------ft_strchr----------");
    printf("\n**************************************************\n");
    printf("Using strchr: %s\n", strchr(str1, str2));
    printf("Using ft_strchr: %s\n", ft_strchr(str1, str2));
    printf("**************************************************\n");
    return (0);
}
