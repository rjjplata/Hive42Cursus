

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (!str)
        return (0);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

int *ft_stratoi(const char *str)
{
    int *result;
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != '\0')
        {
            result = ft_atoi(str[i]);
            while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
                i++;
        }
    }
    return(result);
}

int main(int argc, char **argv)
{
    int i;

    i =0;
    if (argc < 2)
    {
        printf("No input provided.\n");
        return 0;
    }
    if (argc == 2 )
    {
        printf("Using ft_atoi\n");
        i = 1;
        while(argv[1][i])
        {
            ft_split(argv[1][i]);
            printf("Element in the array[%i]: \n", argv[1][i]);
            i++;
        }
    }
    i = 0;
    if (argc > 2)
    {
        printf("Using ft_stratoi\n");
        ft_stratoi(argv[1]);
        while(argv[1][i])
        {
            printf("Element in the array[%d]: \n", argv[1][i]);
            i++;
        }
    }
    return 0;
} 
