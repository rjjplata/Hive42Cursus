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

static void ft_dupeChecker(int *array, int argnbr)
{
    int *array2;
    int lengthA;
    int lengthB;
    
    
    if(find_dup(array, argnbr) == 1)
            return;
    lengthA = argnbr;
    lengthB = 0;
    array2 = (int *)malloc(sizeof(int) * (argnbr - 1));
    if(array2 == NULL)
        return;
    if(lengthA == 2)
        random2(array, &lengthA);
    if(lengthA == 3)
        random3(array, &lengthA);
    else if(lengthA == 4)
        random4(array, &lengthA);
    else if(lengthA > 4)
        quick_sort1(array, array2, &lengthA, &lengthB);
    free(array2);
}


static void dosort_2(char **array, int argnbr)
{
    int *array2;
    int i;
    int nbr;

    i = 0;
    array2 = (int *)malloc(sizeof(int) * (argnbr - 1));
    if(array2 == NULL)
        return;
    while(argnbr > (i))
    {
        nbr = ft_atol(array[i]);
        array2[i] = (int)nbr;
        i++;
    }
    ft_dupeChecker(array2, argnbr);
    free(array2);
}

static void dosort_1(char *str)
{
    int argnbr;
    char **array;

    array = NULL;
    argnbr = countsubstr(str);
    if(argnbr == 1)
    {
        printf("Error!");
        return;
    }
    else if(argnbr != 1)
        array = ft_split(str, ' ');
        dosort_2(array, argnbr);
}

int main(int argc, char **argv)
{
    int argnbr;
    int i;
    int j;
    int result;
    int *array2;
    long nbr;

    array2 = NULL;
    if (argc == 1)
    {
        printf("No arguments");
        return(0);
    }
    if (argc == 2)
    {
        result = checkarg1(argv[1]);
        if(result == 1)
            dosort_1(argv[1]);
        else if (result == 0)
            printf("Error");
    }
    if (argc >= 3)
    {
        i = 1;
        result = 1;
        while(argc > 1 && result == 1)
        {
            result = checkarg1(argv[i]);
            i++;
            argc--;
        }
        j = 1;
        if(result == 1)
        {
            array2 = (int *)malloc(sizeof(int) * i);
            if(array2 == NULL)
                return(0);
            while(i > j)
            {
                nbr = ft_atol(argv[j]);
                array2[j - 1] = (int)nbr;
                j++;
            }
            argnbr = i - 1;
            ft_dupeChecker(array2, argnbr);
            free(array2);
        }
        else if(result == 0)
            printf("Error in input\n");
    }
    return(0);
}