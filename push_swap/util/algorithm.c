#include "../includes/push_swap.h"

void    random2(int *array, int *length)
{
    if((arrayASortedOrNot(array, length) == 1))
        return;
    ft_sa(array, length);
}

void    random3(int *array, int *length)
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

void    random4(int *array, int *length)
{
    int i;
    int max;
    int *temparray;
    int templength;
    int len;

    if((arrayASortedOrNot(array, length) == 1))
        return;
    templength = 0;
    len = *length;
	temparray = (int *)malloc(sizeof(int) * (len - 1));
	if(temparray == NULL)
		return;
    max = get_max(array, length);
    i = 0;
    while(i < *length)
    {
        if (array[0] == max)
            ft_pb(array, temparray, length, &templength);
        ft_ra(array, length);
        i++;
    }
    random3(array, length);
    ft_pa(array, temparray, length, &templength);
    i = 0;
    while(i < *length)
    {
        if(array[*length - 1] != max)
            ft_rra(array, length);
        i++;
    }
    free(temparray);
}

void    min_max(int *array, int *array2, int *lengthA, int *lengthB)
{
    int min;
    int max;

    max = get_max(array, lengthA);
    min = get_min(array2, lengthB);
    if(array[0] == max && array2[0] == min)
        ft_rr(array, array2, lengthA, lengthB);
    if(array[0] == max && array2[0] != min)
        ft_ra(array, lengthA);
    if(array2[0] == min && array[0] != max)
        ft_rb(array2, lengthB);
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
        ft_sa(array, lengthA);
    else if(array[0] < array[1])
        ft_ra(array, lengthA);
}

void    onlyBnotSorted(int *array2, int *lengthB)
{
    if(array2[0] < array2[1])
        ft_sb(array2, lengthB);
    else if(array2[0] > array2[1])
        ft_rb(array2, lengthB);
}

void    quick_sort3(int *array, int *array2, int *lengthA, int *lengthB)
{
    int len;

    len = *lengthB;
    while (len > 0)
    {
        ft_pa(array, array2, lengthA, lengthB);
        len--;
    }
}

void    quick_sort2(int *array, int *array2, int *lengthA, int *lengthB)
{
    int i;
    int a;
    int b;

    i = 0;
    while(i < ((*lengthA + *lengthB)))
    {
        min_max(array, array2, lengthA, lengthB);
        if((arrayASortedOrNot(array, lengthA) == 0) && (arrayBSortedOrNot(array2, lengthB) == 0))
            AandBnotSorted(array, array2, lengthA, lengthB);
        else if((arrayASortedOrNot(array, lengthA) == 0) && (arrayBSortedOrNot(array2, lengthB) == 1))
            onlyAnotSorted(array, lengthA);
        else if((arrayASortedOrNot(array, lengthA) == 1) && (arrayBSortedOrNot(array2, lengthB) == 0))
            onlyBnotSorted(array2, lengthB);
        i++;
    }
    a = arrayASortedOrNot(array, lengthA);
    b = arrayBSortedOrNot(array2, lengthB);
    if(a == 0 || b == 0)
        quick_sort2(array, array2, lengthA, lengthB);
    quick_sort3(array, array2, lengthA, lengthB);
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
    while(i <= (j - 1))
    {
        if(array[0] < median)
            ft_pb(array, array2, lengthA, lengthB);
        else if(array[0] >= median)
            ft_ra(array, lengthA);
        i++;
    }
    quick_sort2(array, array2, lengthA, lengthB);
}