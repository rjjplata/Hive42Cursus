/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:41:37 by rplata            #+#    #+#             */
/*   Updated: 2024/11/08 16:34:11 by rplata           ###   ########.fr       */
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

    //ft_memcpy
    //when overlap happens then it just ignore it
    char str1[] = "Program";
    char str2[] = "Test";
    char str3[] = "Program";
    char str4[] = "Test";
    
    printf("str1 before memcpy:\n ");
    printf("%s\n", str1);
    memcpy(str1, str2, sizeof(str2));
    printf("str1 after memcpy:\n ");
    printf("%s\n", str1);
    printf("str3 before using ft_memcpy:\n ");
    printf("%s\n", str3);
    char *result = ft_memcpy(str3, str4, sizeof(str4));
    printf("str3 after using ft_memcpy:\n ");
    printf("%s\n", str3);
    return 0;

    //ft_memmove
    //when overlap it start from first position
    char str1[9] = "aabbccdd";
    char str2[9] = "aabbccdd";
    printf("The string: %s\n", str1);
    char *result = ft_memmove(str1 + 2, str1, 6);
    printf("New string: %s\n", str1);
    printf("The string: %s\n", str2);
    memmove(str2 + 2, str2, 6);
    printf("New string: %s\n", str2);

    //difference of memmove and memcpy
    char str1[9] = "aabbccdd";
    char str2[9] = "aabbccdd";

    printf("The string: %s\n", str1);
    memcpy(str1 + 2, str1, 6);
    printf("New string: %s\n", str1);

   
    printf("The string: %s\n", str2);
    memmove(str2 + 2, str2, 6);
    printf("New string: %s\n", str2);

    //ft_strlcpy
    char str1[9] = "aabbccdd";
    char str2[9] = "efghi";
    printf("The string: %s\n", str1);
    char result = ft_strlcpy(str1+2, str2, 5);
    printf("New string: %s\n", str1);

    //ft_strlcat
    char str1[50] = "aabbccdd";
    char str2[50] = "efghi";
    printf("The string: %s\n", str1);
    char result = ft_strlcat(str1, str2, sizeof(str1));
    printf("New string: %s\n", str1);

    //ft_strchr
    //returns a pointer starting from the first occurence of the character
    char str1[10] = "Actuation";
    char str2 = 'i';
    char str3[13] = "Unbelievable";
    char str4 = 'i';
    printf("Using strchr: %s\n", strchr(str1, str2));
    printf("Using ft_strchr: %s\n", ft_strchr(str3, str4));
    return (0);

    //ft_strrchr
    //returns the last occurence of the character
    char str1[16] = "LiberatingThIng";
    char str2 = 'i';
    char str3[16] = "LiberatingThIng";
    char str4 = 'i';
    printf("Using strchr: %s\n", strrchr(str1, str2));
    printf("Using ft_strchr: %s\n", ft_strrchr(str3, str4));
    return (0);

    //ft_strncmp
    //compares at most N characters of Null-terminated C strings
    char str1[] = "Pinoy";
    char str2[]= "PinOy";
    printf("%d\n", strncmp(str1, str2, 4));
    printf("Using ft_strncmp: %d\n", ft_strncmp(str1, str2, 4));
    return (0);

    //ft_memchr
    const char str1[] = "Pinoy";
    const char str2 = 'i';
    const char str3[] = "Pinoy";
    const char str4 = 'x';
    printf("%s\n", ((char*)memchr(str1, str2, 4)));
    printf("Using ft_memchr: %s\n", ((char*)ft_memchr(str3, str4, 4)));
    return (0);

    //ft_memcmp
    //compares binary byte buffers of N bytes
    char str1[] = "Pinoy";
    char str2[]= "PinOy";
    printf("%d\n", memcmp(str2, str1, 4));
    printf("Using ft_memcmp: %d\n", ft_memcmp(str2, str1, 4));
    return (0);

    //ft_strnstr
    const char str1[20] = "ProgramFinished";
    const char str2[10] = "ini";
    char *result;

    result = ft_strnstr(str1, str2, 20);
    printf("The substring is: %s\n", result);
    return(0);
    
}