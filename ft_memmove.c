/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:32:54 by rplata            #+#    #+#             */
/*   Updated: 2024/11/17 13:46:35 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	c_src = (char *) src;
	c_dst = (char *) dest;
	i = 0;
	if (c_dst > c_src)
	{
		while (n-- > 0)
			c_dst[n] = c_src[n];
	}
	else
	{
		while (i < n)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}
