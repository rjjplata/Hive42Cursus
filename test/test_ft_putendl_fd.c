/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:12:03 by rplata            #+#    #+#             */
/*   Updated: 2024/11/12 22:37:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main (void)
{
	char file[] = "mystringfile2.txt";
	int fd = open(file, O_CREAT | O_WRONLY);
	ft_putendl_fd("I am tired", fd);
	close(fd);
}
