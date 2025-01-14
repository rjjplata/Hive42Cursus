#include "../includes/push_swap.h"

void   random3(int *array, int length)
{
    int i;
    
    i = 0;
    if((array[i + 1] < array[i]) && (array[i + 1] < array[i + 2]))
    {
        if(array[i] < array[i + 2])
            ft_sa(array, length);
        else if(array[i] > array[i + 2])
            ft_ra(array, length);
    }
    else if((array[i + 1] > array[i] && array[i + 1] > array[i + 2]))
    {
        if(array[i] > array[i + 2])
            ft_rra(array, length);
        else if(array[i] < array[i + 2])
        {
            ft_sa(array, length);
            ft_ra(array, length);
        }
    }
    else if ((array[i + 2] < array[i + 1]) && (array[i + 1] < array[i]))
    {
        ft_sa(array, length);
        ft_rra(array, length);
    }
}

void    random5(int *array, int length)
{
    int i;
    int *array2;

    i = 0;
    array2 = 0;
    while((i + 2) < length)
    {
        ft_pb(array, array2, length);
        printf("Element[0]: %i", array2[0]);
        i++;
    }
}


/*
quicksort(int n)
    if n == 1 return
    int top_half_len = 0
    choose a median //it's up to you to determine the best way to do this
    for 0 to n {    //filter all values above the median into list 2
        if (value > median) {
            push list 1 top to list 2 //list 2 stores the larger half
            top_half_len++
        }
        rotate list 1 forward
    }

    //reverse the list back to original position
    rotate list 1 backward (n - top_half_len) times

    //push larger half onto smaller half
    push list 2 top to list 1 top_half_len times

    //recursively call this on the larger half
    quicksort(top_half_len)

    //rotate smaller half to front
    rotate list 1 forward top_half_len times

    //recursively call this on smaller half
    quicksort(n - top_half_len) 

    //reverse list back to original position
    rotate list 1 backward top_half_len times

    */