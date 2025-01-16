#include "../includes/push_swap.h"

void ft_swap(int *array, int *length)
{
    int temp;

    if (*length <= 1)
        return;
    else
    {
        temp = array[0];
        array[0] = array[1];
        array[1] = temp;
    }
}

void ft_pushToEmpty (int *arraySRC, int *arrayDST, int *lengthA)
{
    int i;

    if(lengthA == 0)
        return;
   // printf("i was here\n");
    arrayDST[0] = arraySRC[0];
    i = 0;
    while (i < (*lengthA - 1))  //
    {
        arraySRC[i] = arraySRC[i + 1];
        i++;
    }
    *lengthA = *lengthA - 1;
}

void ft_push(int *arraySRC, int *arrayDST, int *lengthA, int *lengthB) 
{
    int i;

    // printf("i was here\n");
    if(lengthA == 0)
        return;
    i = 0;
    if (lengthB != 0 && lengthB != 0)
    {
        printf("i was here\n");i = *lengthB;
        while(i >= 1)
        {
            arrayDST[i] = arrayDST[i - 1];
            i--;
        }
        arrayDST[0] = arraySRC[0];
        i = 0;
        while (i < *lengthA - 1)
        {
            arraySRC[i] = arraySRC[i + 1];
            i++;
        }
        *lengthA -= 1;
    }
    if (lengthB == 0 && lengthA != 0)
    {
        printf("how");
        ft_pushToEmpty(arraySRC, arrayDST, lengthA);
    }
}

void ft_revrotate(int *array, int *length)
{
    int i;
    int temp;

    i = *length - 1;
    temp = array[i];
    while (i >= 1) 
    {
        array[i] = array[i - 1];  // Shift each element downwards/to the right
        i--;  
    }
    array[0] = temp;
    return;
}

void ft_rotate(int *array, int *length)
{
    int i;
    int temp;

    i = 0;
    temp = array[0];
    while (i != (*length - 1))
    {
        array[i] = array[i + 1];  // Shift each element downwards/to the right
        i++;  
    }
    array[*length-1] = temp;
    return; 
}