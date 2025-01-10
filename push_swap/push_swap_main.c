#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

<<<<<<< HEAD:push_swap/push_swap_input.c

static int checkarg1(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] == '+' || str[i] == '-' || str[i] == ' ' || str[i] == '\t' || (str[i] >= '0' && str[i] <= '9')))
            return(0);
        if(str[i] == '+' || str[i] == '-')
        {
            if(!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return(0);
            i++;
=======
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
>>>>>>> fdd97620334a02667574c4c61b359fb81af87d30:push_swap/push_swap_main.c
        }
        while(str[i] >= '0' && str[i] <= '9')
            i++;
        while(str[i] == ' ' || str[i] == '\t')
            i++;
    }
<<<<<<< HEAD:push_swap/push_swap_input.c
    return(1);
} 



int main(int argc, char **argv)
{
    size_t argnbr;
    int *array;
    int i;
    int result;

    if (argc == 1)
=======
    return(result);
}

int main(int argc, char **argv)
{
    int i;
    char *x;

    i =0;
    if (argc < 2)
>>>>>>> fdd97620334a02667574c4c61b359fb81af87d30:push_swap/push_swap_main.c
    {
        printf("No arguments");
        return(0);
    }
<<<<<<< HEAD:push_swap/push_swap_input.c
    if (argc == 2)
    {
            result = checkarg1(argv[1]);
            if(result == 1)
            {
                printf("Number okay");
            }
            else if (result == 0)
            {
                printf("Error in input");
            }
            i++;
    }
}
=======
    if (argc == 2 )
    {
        printf("Using ft_atoi\n");
        i = 0;
        x = (ft_split(argv[1], ' '));
        x = ft_atoi(x);
        while(x[i])
        {
            printf("Element [i]: %d", x[i]);
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
>>>>>>> fdd97620334a02667574c4c61b359fb81af87d30:push_swap/push_swap_main.c
