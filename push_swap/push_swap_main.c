#include <unistd.h>
#include <stdio.h> //need to remove
#include <limits.h>
#include <stdlib.h>
#include <string.h>





/////////////////////////////////////

int ft_arraylength (int *array)
{
    int length;

    length = 0;
    while (array[length] != 0 && length < 100) 
    {
        length++;
    }
    return (length);
}

int ft_swap(int *array)
{
    int temp;
    int length;
    
    length = ft_arraylength(array);
    if (length <= 1)
    {
        return (0);
    }
    else
    {
        temp = array[0];
        array[0] = array[1];
        array[1] = temp;
        return (array[100]);
    }
}

int ft_pushToEmpty (int *arraySRC, int *arrayDST)
{
    int i;

    arrayDST[0] = arraySRC[0];
    i = 0;
    while (i < (ft_arraylength(arraySRC) - 1)) 
    {
        arraySRC[i] = arraySRC[i + 1];
        i++;
    }
    // After shifting, set the last two elements of arrayA to 0
    arraySRC[(ft_arraylength(arraySRC)) - 1] = 0;
    return (0);
}

int ft_push(int *arraySRC, int *arrayDST) 
{
    int i = 0;
    int lengthA = 0;
    int lengthB = 0;

    while (arraySRC[lengthA] != 0) 
        lengthA++;
    printf("The number of elements in stack A is: %d\n", lengthA);
    while (arrayDST[lengthB] != 0) 
        lengthB++;
    printf("The number of elements in stack B is: %d\n", lengthB);
    if (lengthA == 0)
        return (0);
    else if (lengthB >= 1)
    {
        i = lengthB;
        while(i >= 1)
        {
            arrayDST[i] = arrayDST[i - 1];
            i--;
        }
        arrayDST[0] = arraySRC[0];
        i = 0;
        while (i < lengthA - 1)
        {
            arraySRC[i] = arraySRC[i + 1];
            i++;
        }
        arraySRC[lengthA - 1] = 0;
    }
    else
        ft_pushToEmpty(arraySRC, arrayDST);
    return 0;  // Return 0 for successful operation
}

int ft_rotate(int *array)
{
    int i;
    int temp;
    int length;

    length = ft_arraylength(array);
    i = length - 1;
    temp = array[i];
    while (i >= 1) 
    {
        array[i] = array[i - 1];  // Shift each element downwards/to the right
        i--;  
    }
    array[0] = temp;
    return (0);
}

int ft_revrotate(int *array)
{
    int i;
    int temp;
    int length;

    length = ft_arraylength(array);
    i = 0;
    temp = array[0];
    while (i != (length - 1))
    {
        array[i] = array[i+1];  // Shift each element downwards/to the right
        i++;  
    }
    array[length-1] = temp;
    return (0); 
}


/////////////////////////////////////////////


void ft_putchar(char c) //not in push_swap.h yet
{
    write(1, &c, 1);
}

void ft_sa(int *arrayA)
{
    ft_swap(arrayA);
    write(1, "sa\n", 3);
}

void ft_sb(int *arrayB)
{
    ft_swap(arrayB);
}

void ft_ss(int *arrayA, int *arrayB)
{
    ft_swap(arrayA);
    ft_swap(arrayB);
}

void ft_pb(int *arrayB, int *arrayA)
{
    ft_push(arrayB, arrayA);
}

void ft_pa(int *arrayA, int *arrayB)
{
    ft_push(arrayA, arrayB);
}

void ft_ra(int *arrayA)
{
    ft_rotate(arrayA);
     write(1, "ra\n", 3);
}

void ft_rb(int *arrayB)
{
    ft_rotate(arrayB);
}

void ft_rr(int *arrayA, int *arrayB)
{
    ft_rotate(arrayA);
    ft_rotate(arrayB);
}

void ft_rra(int *arrayA)
{
    ft_revrotate(arrayA);
     write(1, "rra\n", 4);
}

void ft_rrb(int *arrayB)
{
    ft_revrotate(arrayB);
}

void ft_rrr(int *arrayA, int *arrayB)
{
    ft_revrotate(arrayA);
    ft_revrotate(arrayB);
}

//////////////////////////////////////////

long ft_atol(const char *str)
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

size_t countsubstr(char const *str)
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

int checkarg1(char *str)
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


void   random3(int *array)
{
    int i;
    
    i = 0;
    if(array[i] && (array[i + 1] < array[i]) && (array[i + 1] < array[i + 2]))
    {
        if(array[i] < array[i + 2])
            ft_sa(array);
        if(array[i] > array[i + 2])
            ft_ra(array);
    }
    else if(array[i] && (array[i + 1] > array[i] && array[i + 1] > array[i + 2]))
    {
        if(array[i] > array[i + 2])
            ft_rra(array);
        if(array[i] < array[i + 2])
        {
            ft_sa(array);
            ft_ra(array);
        }
    }
    else if (array[i] && (array[i + 2] < array[i + 1]) && (array[i + 1] < array[i]))
    {
        ft_sa(array);
        ft_rra(array);
    }
}

void pushtoalgo(int *array)
{
    int elemnum;

    elemnum = ft_arraylength(array);

    if(elemnum == 3)
        random3(array);
    if(elemnum == 5)
    else
        printf("wrong value");
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
            pushtoalgo(array2);
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