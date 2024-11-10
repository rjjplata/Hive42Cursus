/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:25:42 by root              #+#    #+#             */
/*   Updated: 2024/11/09 21:52:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* add printf("0") in while loop to show how bzero fills n bytes of the 
object pointed to by dst with zero (NUL) bytes */
int main()
{
    char buf1[] = "bzero";
    ft_bzero(buf1, 5);
}