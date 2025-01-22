#include "../includes/push_swap.h"

int find_dup(int *arr, int length)
{
    int i;
    int j;

    i = 0;
    while (i < length)
    {
        j = i + 1;
        while(j < length)
        {
            if (arr[i] == arr[j])
                return (1);
            j++;
        }
        i++;
    }
    return(0);
}

int arrayBSortedOrNot(int *arr, int *length)
{
    int i;

    i = 1;
    if (*length == 0 || *length == 1)
        return(0);
    while(i < *length)
    {
        if(arr[i - 1] < arr[i])
            return(0);
        i++;
    }
    return (1);
}

int arrayASortedOrNot(int *arr, int *length)
{
    int i;

    i = 1;
    if (*length == 0 || *length == 1)
        return(0);
    while(i < *length)
    {
        if(arr[i - 1] > arr[i])
            return(0);
        i++;
    }
    return (1);
}