/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:43:51 by root              #+#    #+#             */
/*   Updated: 2024/12/04 17:55:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    int fd = open("tester.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    char *line;
    int i = 1;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line %d: %s\n", i, line);
        i++;
        free(line);
    }
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }
    return 0;
}