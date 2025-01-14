#include "../includes/push_swap.h"

int ft_swap(int *array, int length)
{
    int temp;

    if (length <= 1)
    {
        return (0);
    }
    else
    {
        temp = array[0];
        array[0] = array[1];
        array[1] = temp;
    }
    return(0);
}

int ft_pushToEmpty (int *arraySRC, int *arrayDST, int length)
{
    int i;

    arrayDST[0] = arraySRC[0];
    i = 0;
    while (i < (length - 1))  //
    {
        arraySRC[i] = arraySRC[i + 1];
        i++;
    }
    // After shifting, set the last two elements of arrayA to 0
    arraySRC[length - 1] = 0; //
    return (0);
}

int ft_push(int *arraySRC, int *arrayDST, int length) 
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
        ft_pushToEmpty(arraySRC, arrayDST , length);
    return 0;  // Return 0 for successful operation
}

int ft_rotate(int *array, int length)
{
    int i;
    int temp;

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

int ft_revrotate(int *array, int length)
{
    int i;
    int temp;

    i = 0;
    temp = array[0];
    while (i != (length - 1))
    {
        array[i] = array[i + 1];  // Shift each element downwards/to the right
        i++;  
    }
    array[length-1] = temp;
    return (0); 
}