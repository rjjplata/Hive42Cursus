#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

/*
static size_t countsubstr(char const *str, char c)
{
    int i;
    unsigned int count;

    i = 0;
    count = 0;
    if(str[i] == '\0')
        return(0);
    while(str[i] != '\0')
    {
        if(str[i] == c)
            i++;
        if(str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
        {
            count++;
            while(str[i] && (str[i] >= '0' && str[i] <= '9'))
                i++;
        }
        i++;
    }
    return(count - 1);
}
*/

static size_t countsubstr(char const *str)
{
    int i = 0;
    unsigned int count = 0;

    if (str[i] == '\0')
        return 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' && (str[i + 1] != '\0'))
            i++;
        if (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')) 
        {
            i++;
            count++;
        }
        while (str[i] != ' ' && (str[i] >= '0' && str[i] <= '9'))
                i++;
    }
    return(count);
}

static int checkarg1(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] == '+' || str[i] == '-' || str[i] == ' ' || (str[i] >= '0' && str[i] <= '9')))
            return(0);
        if(str[i] == '+' || str[i] == '-')
        {
            if(!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return(0);
            i++;
        }
        while(str[i] >= '0' && str[i] <= '9')
            i++;
        while(str[i] == ' ')
            i++;
    }
    return(1);
} 

int main(int argc, char **argv)
{
    int argnbr;
    char **array;
    int i;
    int result;
    long nbr;
    int j;

    array = NULL;
    if (argc == 1)
    {
        printf("No arguments");
        return(0);
    }
    if (argc == 2)
    {
            argnbr = 0;
            result = checkarg1(argv[1]);
            if(result == 1)
            {
                argnbr = countsubstr(argv[1]);
                printf("Number okay\n");
                printf("Number of arguments: %d", argnbr);
            }
            else if (result == 0)
            {
                printf("Error in input");
            }
            i++;
    }
    i = 1;
    j = 0;
    if (argc > 2)
    {
   //     nbr = (int *)malloc(sizeof(int) * (argc - 1));
        while (i < argc)
        {
            result = checkarg1(argv[i]);
            if(result == 0)
            {
                printf("Error input");
                return(0);
            }
 //           nbr[j] = (int)
            printf("Input valid\n");
            i++;
        }
    }
}