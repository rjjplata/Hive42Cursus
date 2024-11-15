/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:06 by rplata            #+#    #+#             */
/*   Updated: 2024/11/13 14:10:26 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main ()
{
	char	*str;

	str = ft_strnstr(NULL, NULL, 10);
	printf("\n----------ft_strnstr----------");
	printf("\n**************************************************\n");
	printf("String: Hello, how are you!  | Search: how  | Len: 10\n");
	printf("%s\n", str);
	printf("\n**************************************************\n");
	return 0;
}
