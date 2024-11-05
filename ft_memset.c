/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:36:53 by rplata            #+#    #+#             */
/*   Updated: 2024/11/04 13:17:22 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (n > i)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}