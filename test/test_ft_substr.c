/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:38:46 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 13:04:27 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main ()
{
	char	*str;

	str = ft_substr("Hello, how are you!", 7, 3);
	printf("%s\n", str);
	return 0;
}
