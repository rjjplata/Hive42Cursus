/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:40:08 by rplata            #+#    #+#             */
/*   Updated: 2024/11/07 15:28:00 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*output_str;
	int		i;

	output_str = (char *)malloc(sizeof (char) * ft_strlen(s) + 1);
	i = 0;
	if (!output_str)
		return (NULL);
	while (s[i])
	{
		output_str[i] = s[i];
		i++;
	}
	output_str[i] = '\0';
	return (output_str);
}
