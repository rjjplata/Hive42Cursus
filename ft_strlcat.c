/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:53:42 by rplata            #+#    #+#             */
/*   Updated: 2024/11/07 15:12:57 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	i;
	size_t	len_src;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size < len_dest)
		len_src = len_src + size;
	else
		len_src = len_src + size;
	i = 0;
	while (src[i] != '\0' && (len_dest + i) < size -1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_src);
}
