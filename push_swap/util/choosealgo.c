#include "../includes/push_swap.h"

void pushtoalgo(int *array, int length)
{
    if(length == 3)
        random3(array, length);
    else if(length == 5)
        random5(array, length);
    else
        printf("wrong value");
}