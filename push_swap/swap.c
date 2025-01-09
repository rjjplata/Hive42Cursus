#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_arraylength (int array[])
{
    int length;

    length = 0;
    while (array[length] != 0 && length < 100) 
    {
        length++;
    }
    return (length);
}

int ft_swap(int array[])
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

int ft_pushToEmpty (int arraySRC[], int arrayDST[])
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

int ft_pushA(int arraySRC[], int arrayDST[]) 
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

int ft_rotate(int array[])
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

int ft_revrotate(int array[])
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

int main ()
{
    int i;
    int lengthA;
    int lengthB;
    int arrayA[100] = {199, 23, 345, 231, -231123};
    int arrayB[100];
/*
   ft_revrotate(arrayB);
   i = 0;
   while(arrayB[i] != 0)
   {
    printf("Element at Position %d: %d\n", i, arrayB[i]);
    i++;
   }
*/
/*    ft_swap(arrayA);
    i = 0;
    while(arrayA[i] != 0)
    {
        printf("Element at Position %d: %d\n", i, arrayA[i]);
        i++;
    } */

    ft_pushA(arrayA, arrayB);
    i = 0;
    while (arrayA[i] != 0)
    {
        printf("Element at Position %d: %d\n", i, arrayA[i]);
        i++;
    }
    i = 0;
    while (arrayB[i] != 0)
    {
        printf("Element at Position %d: %d\n", i, arrayB[i]);
        i++;
    }
    return (0);
}



int ft_swap(int array[])
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

int ft_arraylength (int array[])
{
    int length;

    length = 0;
    while (array[length] != 0 && length < 100) 
    {
        length++;
    }
    return (length);
}

int ft_findlowest(int array[])
{
    int temp;
    int i;
    int j;


    while (array)
    {
        while (array[i] < array[j])
        {
            j++;
        }
        i++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_sa(int arrayA[])
{
    ft_swap(arrayA);
}

int ft_sb(int arrayB[])
{
    ft_swap(arrayB);
}

int ft_ss(int arrayA[], arrayB[])
{
    ft_swap(arrayA);
    ft_swap(arrayB);
}

int ft_pb(int arrayB[], int arrayA[])
{
    ft_pushA(int arrayB, int arrayA);
}

int ft_pa(int arrayA[], int arrayB[])
{
    ft_pushA(int arrayA, int arrayB);
}

int ft_ra(int arrayA[])
{
    ft_rotate(arrayA);
}

int ft_rb(int arrayB[])
{
    ft_rotate(arrayB);
}

int ft_rr(int arrayA[], int arrayB[])
{
    ft_rotate(arrayA);
    ft_rotate(arrayB);
}

int ft_rra(int arrayA[])
{
    ft_revrotate(arrayA);
}

int ft_rrb(int arrayB[])
{
    ft_revrotate(arrayB);
}

int ft_rrr(int arrayA, int arrayB)
{
    ft_revrotate(arrayA);
    ft_revrotate(arrayB);
}


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
