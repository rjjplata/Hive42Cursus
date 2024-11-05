/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:41:37 by rplata            #+#    #+#             */
/*   Updated: 2024/11/05 11:41:40 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>


int main()
{
    //ft_isalpha
    printf("%d\n", ft_isalpha('2'));
    printf("%d\n", ft_isalpha('X'));
    printf("%d\n", ft_isalpha('h'));

    //ft_isdigit
    printf("%d\n", ft_isdigit('1'));
    printf("%d\n", ft_isdigit(-1));
    printf("%d\n", ft_isdigit('x'));

    //ft_isalnum
    printf("%d\n", ft_isdigit('1'));
    printf("%d\n", ft_isdigit(-1));
    printf("%d\n", ft_isdigit('x'));

    //ft_isascii
    printf("%d\n", ft_isascii(128));
    printf("%d\n", ft_isascii(54));
    printf("%d\n", ft_isascii(-1));

    //ft_isprint
    printf("%d\n", ft_isprint(126));
    printf("%d\n", ft_isprint(-1));
    printf("%d\n", ft_isprint('x'));
    printf("%d\n", ft_isprint('Y'));

    //ft_strlen
    printf("%d\n", ft_strlen("character"));
    printf("%d\n", ft_strlen("-1"));
    printf("%d\n", ft_strlen("x"));
    printf("%d\n", ft_strlen("You"));

    //ft_toupper
    printf("%c\n", ft_toupper(97));
    printf("%d\n", ft_toupper(97));
    printf("%c\n", ft_toupper('5'));

    //ft_tolower
    printf("%c\n", ft_tolower(97));
    printf("%d\n", ft_tolower(97));  
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", ft_tolower('5'));

    //ft_atoi
    printf("%d\n", ft_atoi("   +---+97"));
    printf("%d\n", ft_atoi("--+-365"));  
    printf("%d\n", ft_atoi(" ++ - 97"));

    //ft_memset
    char buf1[] = "C programming memset function";
    char buf2[] = "C programming memset function";
    printf("Before: %s\n", buf1);
    memset( buf1, '#', 5 );
    printf( "After:  %s\n", buf1);
    char *result = ft_memset(buf2, '#', 5);
    printf("ft_memset: %s\n", result);

    

}