#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

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

char *ft_strncpy(char *s1, char *s2, int n)
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
    size_t substr;
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
                array = ft_split(argv[1], ' ');
                printf("%s\n", array[1]);
              //  argnbr = countsubstr(argv[1]);
                printf("Number okay\n");
              //  printf("Number of arguments: %d", argnbr);
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