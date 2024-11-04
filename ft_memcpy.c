/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:27:21 by rplata            #+#    #+#             */
/*   Updated: 2024/11/04 14:15:37 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_tmp;
	const char	*src_temp;

	dst_tmp = dst;
	src_temp = src;
	if (dst_tmp == src_temp)
		return (dst_tmp);
	while (n > 0)
	{
		*dst_tmp = *src_temp;
		dst_tmp++;
		src_temp++;
		n--;
	}
	return (dst);
}
