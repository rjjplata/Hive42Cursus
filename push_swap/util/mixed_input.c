/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mixed_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:34:02 by rplata            #+#    #+#             */
/*   Updated: 2025/01/27 15:34:34 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"


char 	*mixed_input(int argc, char **argv)
{
    int i;
    char *temp;
    char *str;

    i = 1;
    temp = (char *)malloc(sizeof(char) * 1);
    str = " ";
    while (argc > 1)
    {
        temp = ft_strjoin(temp, argv[i]);
        temp = ft_strjoin(temp, str);
        argc--;
        i++;
    }
    return (temp);
}
