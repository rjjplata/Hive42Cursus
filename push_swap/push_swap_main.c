#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

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
        }
        while(str[i] >= '0' && str[i] <= '9')
            i++;
        while(str[i] == ' ' || str[i] == '\t')
            i++;
    }
    return(1);
} 

int main(int argc, char **argv)
{
    size_t argnbr;
    int *array;
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