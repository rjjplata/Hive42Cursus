
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
/*
long ft_atoi(const char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

    if (!str)
        return 0;
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

void ft_stratoi(const char *str)
{
    long result;
    int i = 0;
    int j = 1;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != '\0')
        {
            result = ft_atoi(&str[i]);
            printf("Input %d: %li\n", j, result);
            j++;
            while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
                i++;
        }
    }
}

*/

long ft_atoi(const char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

    if (!str)
        return 0;
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

void ft_stratoi(const char *str)
{
    long result;
    int i = 0;
    int j = 1;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != '\0')
        {
            result = ft_atoi(&str[i]);
            printf("Input %d: %li\n", j, result);
            j++;
            while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
                i++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("No input provided.\n");
        return 0;
    }
    if (argc > 2)
    {
        for (int i = 1; i < argc; i++)
        {
            long x = ft_atoi(argv[i]);
            if (x < LONG_MIN || x > LONG_MAX)
            {
                printf("Input is invalid\n");
                return 0;
            }
            else
            {
                printf("Input %d: %li\n", i, x);
            }
        }
    }
    else
    {
        printf("Using ft_stratoi\n");
        ft_stratoi(argv[1]);
    }
    return 0;
}
