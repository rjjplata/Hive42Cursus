/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_puthcar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:14:25 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 17:55:54 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main (void)
{
	char file[] = "myfile.txt";
	int fd = open(file, O_CREAT | O_WRONLY);
	ft_putchar_fd('x', fd);
	close(fd);
	
}
