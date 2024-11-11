/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:12:03 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 18:16:39 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main (void)
{
	char file[] = "mystringfile.txt";
	int fd = open(file, O_CREAT | O_WRONLY);
	ft_putendl_fd("I am tired", fd);
	close(fd);
}
