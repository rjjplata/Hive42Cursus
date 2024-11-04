/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:40:08 by rplata            #+#    #+#             */
/*   Updated: 2024/11/04 16:40:10 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*output_str;
	int		i;

	output_str = (char *)malloc(sizeof (char) * ft_strlen(s1) + 1);
	i = 0;
	if (!output_str)
		return (NULL);
	while (s1[i])
	{
		output_str[i] = s1[i];
		i++;
	}
	output_str[i] = '\0';
	return (output_str);
}