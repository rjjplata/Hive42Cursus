/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:59:30 by root              #+#    #+#             */
/*   Updated: 2024/11/09 22:15:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  x;
    char    *str;

    str = (char*)malloc(sizeof(*s) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    x = 0;
    while (s[i])
    {
        if (i >= start && x < len)
        {
            str[x] = s[i];
            x++;
        }
        i++;
    }
    str[x] = 0;
    return (str);
}
