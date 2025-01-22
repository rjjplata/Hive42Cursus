#include "../includes/push_swap.h"

void   random3(int *array, int *length)
{
    int i;
    
    if((arrayASortedOrNot(array, length) == 1))
        return;
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

void    AandBnotSorted(int *array, int *array2, int *lengthA, int *lengthB)
{
    if((array[0] > array[1]) && (array2[0] < array2[1]))
    {
        ft_ss(array, array2, lengthA, lengthB);
        ft_rr(array, array2, lengthA, lengthB);
    }
    else if((array[0] < array[1]) && (array2[0] > array2[1]))
        ft_rr(array, array2, lengthA, lengthB);
    else if(array[0] > array[1] && (array2[0] > array2[1]))
    {
        ft_sa(array, lengthA);
        ft_rr(array, array2, lengthA, lengthB);
    }
    else if(array[0] < array[1] && (array2[0] < array2[1]))
    {
        ft_sb(array2, lengthB);
        ft_rr(array, array2, lengthA, lengthB);
    }
}

void    onlyAnotSorted(int *array, int *lengthA)
{
    if(array[0] > array[1])
}

void    quick_sort2(int *array, int *array2, int *lengthA, int *lengthB)
{
    int i;

    printf("%i %i %i %i %i %i\n", array[0], array[1], array[2], array[3], array[4], array[5]);
    printf("%i %i %i %i %i %i\n", array2[0], array2[1], array2[2], array2[3], array2[4], array2[5]);
    printf("lengthA = %i\n", *lengthA);
    printf("lengthB = %i\n", *lengthB);
    i = 0;
    while(i < ((*lengthA + *lengthB)))
    {
        if((arrayASortedOrNot(array, lengthA) == 0) && (arrayBSortedOrNot(array2, lengthB) == 0))
            AandBnotsorted(array, array2, lengthA, lengthB);
        if((arrayASortedOrNot(array, lengthA) == 0) && (arrayBSortedOrNot(array2, lengthB) == 1))
            onlyAnotSorted(array, lengthA);
        if((arrayASortedOrNot(array, lengthA) == 1) && (arrayBSortedOrNot(array2, lengthB) == 0))
            onlyBnotSorted(array2, lengthB);
        printf("%i %i %i %i %i %i\n", array[0], array[1], array[2], array[3], array[4], array[5]);
        printf("%i %i %i %i %i %i\n", array2[0], array2[1], array2[2], array2[3], array2[4], array2[5]);
        printf("lengthA = %i\n", *lengthA);
        printf("lengthB = %i\n", *lengthB);
        printf("%i\n", i);  
    }
}
   


void    quick_sort1(int *array, int *array2, int *lengthA, int *lengthB)
{
    int median;
    int i;
    int j;

    j = *lengthA;
    i = 0;
    if((arrayASortedOrNot(array, lengthA) == 1))
        return;
    median = get_median(array, j);
    printf("%i\n", median); 
    while(i <= (j - 1))
    {
        

        if(array[0] < median)
            ft_pb(array, array2, lengthA, lengthB);
        else if(array[0] >= median)
            ft_ra(array, lengthA);
        i++;
    }
    
    printf("%i %i %i %i %i %i\n", array[0], array[1], array[2], array[3], array[4], array[5]);
    printf("%i %i %i %i %i %i\n", array2[0], array2[1], array2[2], array2[3], array2[4], array2[5]);
    printf("lengthA = %i\n", *lengthA);
    printf("lengthB = %i\n", *lengthB);
    printf("=================\n");
    quick_sort2(array, array2, lengthA, lengthB);

//    printf("%i %i %i %i %i %i\n", array[0], array[1], array[2], array[3], array[4], array[5]);
  //  printf("%i %i %i %i %i %i\n", array2[0], array2[1], array2[2], array2[3], array2[4], array2[5]); 
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