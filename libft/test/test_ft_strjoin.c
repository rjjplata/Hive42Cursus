/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:37:19 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 22:41:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


int main ()
{
	char	s1[] = "black";
	char	s2[] = "white";

	printf("\n----------ft_strjoin----------");
	printf("\n**************************************************\n");
	printf("Word 1: black\n");
	printf("Word 2: white\n");
	char *x = ft_strjoin(s1, s2);
	printf("Using ft_strjoin: %s\n", x);
	free (x);
	printf("\n**************************************************\n");
}
