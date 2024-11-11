/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:50:32 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 10:57:18 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.>
#include <string.h>

char	f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main ()
{
	char	str1[] = "abcd";
	char	*str2;

	str2 = ft_strmapi(str1, *f);
	printf("%s\n, str2);
}
