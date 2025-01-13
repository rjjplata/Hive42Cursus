#include "push_swap.h"

int arraySortedOrNot(int *arr, int n)
{
    int i;

    i = 1;
    if (n == 0 || n == 1)
        return(0);
    while(i < n)
    {
        if(arr[i - 1] > arr[i])
            return(0)
        i++;
    }
    return (1);

}