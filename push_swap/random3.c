#include <stdio.h>
#include <unistd.h>

void    random3(int *array)
{
    int i;
    i = 0;
    //case 1 (2 1 3) and case 3(3 1 2)

    if(array[i] != '\0' && (array[i + 1] < array[i]) && (array[i + 1] < array[i + 2]))
    {
        if(array[i] > array[i + 2])
            ft_sa(array);
        else
            ft_ra(array);
    }
}