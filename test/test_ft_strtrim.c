/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:33:41 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 22:43:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

int main()
{
	printf("\n----------ft_strtrim----------");
	printf("\n**************************************************\n");
	printf("String: abqbc   | String to trim: abc\n");
	char *str = ft_strtrim("abqbc", "abc");
	printf("After using ft_strtrim: %s\n", str);
//	free(str);
//	char *str = ft_strtrim("xavocadoyz", "xyz");
//	printf("%s\n", str);
	free (str);
	printf("\n**************************************************\n");
	return 0;
}
