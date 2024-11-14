/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:38:46 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 22:43:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
	char	*str;

	str = ft_substr("Hello, how are you!", 7, 3);
	printf("\n----------ft_substr----------");
	printf("\n**************************************************\n");
	printf("String: Hello, how are you!  |  Start: 7  | Len: 3\n");
	printf("After using ft_substr: %s\n", str);
	free(str);
	printf("\n**************************************************\n");
	return 0;
}
