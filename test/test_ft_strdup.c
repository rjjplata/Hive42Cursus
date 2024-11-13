/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:12:52 by rplata            #+#    #+#             */
/*   Updated: 2024/11/13 14:13:40 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
        char    *str;

        str = ft_strdup("Hello, how are you!");
        printf("\n----------ft_strdup----------");
        printf("\n**************************************************\n");
        printf("%s\n", str);
        free(str);
        printf("\n**************************************************\n");
        return 0;
}

