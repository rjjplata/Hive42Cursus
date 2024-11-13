/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:02:46 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 18:05:10 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

int main (void)
{
	char file[] = "mynumberfile.txt";
	int fd = open(file, O_CREAT | O_WRONLY);
	ft_putnbr_fd(3, fd);
	close(fd);
}
