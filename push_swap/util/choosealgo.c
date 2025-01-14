#include "../includes/push_swap.h"

void pushtoalgo(int *array)
{
    int elemnum;

    elemnum = ft_arraylength(array);

    if(elemnum == 3)
        random3(array);
    else
        printf("wrong value");
}