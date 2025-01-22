#include "../includes/push_swap.h"

int get_max(int *array, int *lengthA)
{
    int i;
    int temp;
    
    if (*lengthA <= 0)
        return(0);
    i = 1;
    temp = array[0];
    while (i < *lengthA)
    {
        if(array[i] > temp)
            temp = array[i];
        i++;
    }
    return(temp);
}
