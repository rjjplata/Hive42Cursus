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

int arraySortedOrNot(int *arr, int n)
{
    int i;

    i = 1;
    if (n == 0 || n == 1)
        return(0);
    while(i < n)
    {
        if(arr[i - 1] > arr[i])
            return(0);
        i++;
    }
    return (1);
}