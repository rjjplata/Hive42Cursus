/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:35:42 by rplata            #+#    #+#             */
/*   Updated: 2024/11/11 18:37:52 by rplata           ###   ########.fr       */
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
	ft_putstr_fd("Lets Go!", fd);
	close(fd);
}
