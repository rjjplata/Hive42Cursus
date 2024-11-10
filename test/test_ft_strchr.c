/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:43:40 by root              #+#    #+#             */
/*   Updated: 2024/11/09 11:45:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main ()
{
    char str1[10] = "Actuation";
    char str2 = 'i';
    char str3[13] = "Actuation";
    char str4 = 'i';
    printf("\n**************************************************\n");
    printf("Using strchr: %s\n", strchr(str1, str2));
    printf("Using ft_strchr: %s\n", ft_strchr(str1, str2));
    printf("**************************************************\n");
    return (0);
}
