#include "../includes/push_swap.h"


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

static void ft_dupeChecker(int *array2, int argnbr)
{
    if(find_dup(array2, argnbr) == 0)
    {
        if(argnbr == 3)
            random3(array2, argnbr);
       // else if(argnbr == 5)
    }
    else if(find_dup(array2, argnbr) == 1)
            return;
    printf("%i %i %i", array2[0], array2[1], array2[2]);
}

static void dosort_2(char *str, int argnbr)
{
    int *array2;
    int i;
    char **array;
    long nbr;

    array = NULL;
    i = 0;
    array = ft_split(str, ' ');
    array2 = (int *)malloc(sizeof(int) * (argnbr - 1));
    while(argnbr > (i))
    {
        nbr = ft_atol(array[i]);
        array2[i] = (int)nbr;
        i++;
    }
    printf("%i %i %i\n", array2[0], array2[1], array2[2]);
    ft_dupeChecker(array2, argnbr);
}

static void dosort_1(char *str)
{
    int argnbr;

    argnbr = countsubstr(str);
    if(argnbr == 1)
    {
        printf("Error!");
        return;
    }
    else if(argnbr != 1)
        dosort_2(str, argnbr);
}

int main(int argc, char **argv)
{
    int argnbr;
    int i;
    int j;
    int result;
    int *array2;
    long nbr;

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
            dosort_1(argv[1]);
        else if (result == 0)
            printf("Error");
    }
    if (argc >= 3)
    {
        i = 1;
        while(argc > 1)
        {
            result = checkarg1(argv[i]);
            result *= 1;
            i++;
            argc--;
        }
        j = 1;
        if(result == 1)
        {
            array2 = (int *)malloc(sizeof(int) * i);
            while(i > j)
            {
                nbr = ft_atol(argv[j]);
                array2[j - 1] = (int)nbr;
                j++;
            }
            argnbr = i - 1;
            printf("%i\n", argnbr);
            if(find_dup(array2, argnbr) == 0)
            {
                printf("No duplicate\n");
                
                if(argnbr == 3)
                    random3(array2, argnbr);
                
            //    else if(argnbr == 5)
                printf("%i %i %i", array2[0], array2[1], array2[2]);
            }
            else if(find_dup(array2, argnbr) == 1)
            {
                printf("Error (there is duplicate)!");
                return(0);
            }
            
        }
        else if (result == 0)
            printf("Error in input\n");
    }
    return(0);
}