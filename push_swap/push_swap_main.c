#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

long    ft_atol(const char *str)
{
    long    result;
    long    sign;
    long    i;

    result = 0;
    sign = 1;
    i = 0;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while((str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(sign * result);
}

static size_t countsubstr(char const *str)
{
    int i = 0;
    unsigned int count = 0;

    if (str[i] == '\0')
        return 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' && (str[i] != '\0'))
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

static char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str, char c)
{
    char **result;
    size_t i;
    size_t j;
    size_t k;
    size_t count;

    count = countsubstr(str);
    result = (char **)malloc(sizeof(char *) * (count + 1));
    if(!str || !result)
        return(NULL);
    i = 0;
    k = 0;
    while(str[i] != '\0')
    {
        while(str[i] && str[i] == c)
            i++;
        j = i;
        while(str[i] && ((str[i] == '+' || str[i] == '-') || (str[i] >= '0' && str[i] <= '9')))
            i++;
        if(i > j)
        {
            result[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(result[k++], &str[j], i - j);
        }
    }
    result[k] = NULL;
    return(result);
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
    int j;
    int *array2;
    long nbr;

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
            i = 0;
            argnbr = countsubstr(argv[1]);
            if(argnbr == 1)
            {
                printf("Error!!");
                return(0);
            }
            array = ft_split(argv[1], ' ');
            printf("Number okay\n");
            printf("Number of arguments: %d\n", argnbr);
            array2 = (int *)malloc(sizeof(int) * (argnbr - 1));
            while(argnbr >= (i + 1))
            {
                nbr = ft_atol(array[i]);
                array2[i] = (int)nbr;
                i++;
            }
            array2[i] = '\0';
            while(i >= 0)
            {
                printf("Element [%i] = %i\n", i, array2[i]);
                i--;
            }
        }
        else if (result == 0)
        {
            printf("Error in input");
        }
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
            printf("number of input is: %d\n", (i - 1));
            printf("input good\n");
            array2 = (int *)malloc(sizeof(int) * i);
            while(i > j)
            {
                nbr = ft_atol(argv[j]);
                array2[j - 1] = (int)nbr;
                j++;
            }
            array2[j - 1] = '\0';
            i = 0;
            while(array2[i] != '\0')
            {
                printf("Element %d = %d\n", i, array2[i]); // for checking if elements are in right place
                i++;
            }
        }
        else if (result == 0)
            printf("Error in input\n");
    }
    free(array);
    return(0);
}