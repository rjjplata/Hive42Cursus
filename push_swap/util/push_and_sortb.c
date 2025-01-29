
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


static int  contain_dup(int *array, int size, int value)
{
    int i;
    
    i = 0;
    while (i < size)
    {
        if (array[i] == value)
            return (1);
        i++;
    }
    return (0);
}

static void    find_chunk_elmnt(int *arr_a, int *chunk, int *len_a)
{
    int i;
    int j;
    int result_size;
    int smallest;
    int smallest_index;

    if (*len_a <= 0)
        return ;
    result_size = 0;
    while(result_size < (*len_a / 5))
    {
        smallest = INT_MAX;
        smallest_index = -1;
        i = 0;
        while (i < *len_a)
        {
            if(arr_a[i] < smallest)
            {
                smallest = arr_a[i];
                smallest_index = i;
            }
            i++;
        }
        if (!contain_dup(chunk, result_size, smallest))
        {
            chunk[result_size] = smallest;
            result_size++;
        }
        arr_a[smallest_index] = INT_MAX;
    }
}

int scan_chunk_top(int *arr_a, int *chunk, int *len_a, int chunk_len)
{
    int i;
    int j;

    if (*len_a == 0)
        return(0);
    i = 0;
    while (i < *len_a)
    {
        j = 0;
        while (j < chunk_len)
        {
            if (arr_a[i] == chunk[j])
                return(i);
            j++;
        }
        i++;
    }
    return (0);
}

int scan_chunk_bottom(int *arr_a, int *chunk, int *len_a, int chunk_len)
{
    int i;
    int j;

    if (*len_a == 0)
        return(0);
    i = *len_a - 1;
    while (i > 0)
    {
        j = 0;
        while (j < chunk_len)
        {
            if (arr_a[i] == chunk[j])
                return(i);
            j++;
        }
        i--;
    }
    return (0);
}

int move_cost(int *len_a, int top, int bottom)
{
    if ((top - 1) <= (*len_a - bottom))
        return(1);
    return (0);
}

void chunk_sort3(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
    if (*len_a == NULL)
        return;
    if (*len_b == NULL)
        ft_pb(arr_a, arr_b, len_a, len_b);
    if (arr_a[0] > arr_b[0])
        ft_pb(arr_a, arr_b, len_a, len_b);
    else if (arr_a[0] < arr_b[0])
    {
        if(*len_b == 1)
            ft_pb(arr_a, arr_b, len_a, len_b);
            ft_sb(arr_b, len_b);
    }
}

void chunk_sort2(int *arr_a, int *len_a, int bottom_index)
{
    if (*len_a == NULL)
        return;
    while (bottom_index < *len_a)
    {
        ft_rra(arr_a, len_a);
        bottom_index++;
    }
}

void chunk_sort1(int *arr_a, int *len_a, int top_index)
{
    int i;

    if (*len_a == NULL)
        return;
    i = 0;
    while (i < top_index)
    {
        ft_ra(arr_a, len_a);
        i++;
    }
}

void    push_and_sortb(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
    int x;
    int *chunk;
    int top_index;
    int bottom_index;

    if ((array_a_sort(arr_a, len_a) == 1))
		return ;
    x = *len_a / 5;
    chunk = (int *)malloc(sizeof(int) * x);
    if (chunk == NULL)
        return ;
    find_chunk_elmnt(arr_a, len_a, chunk, x) ;
    top_index = scan_chunk_top(arr_a, chunk, len_a);
    bottom_index = scan_chunk_bottom(arr_a, chunk, len_a);
    if(move_cost(len_a, top_index, bottom_index) == 1)
        chunk_sort1(arr_a, len_a, top_index);
    else if (move_cost(len_a, top_index, bottom_index) == 0)
        chunk_sort2(arr_a, len_a, bottom_index);
    chunk_sort3 (arr_a, arr_b, len_a, len_b);
    
    free(chunk);
}


int main ()
{
    int x;
    int array[15] = {18, 7, 17, 6, 16, 5, 15, 4, 14, 3, 13, 2, 12, 11, 1};
    int *chunk;

    
    x = 15;
    chunk = ((int *)malloc(sizeof(int) * (x / 5)));
    if (chunk == NULL)
        return (0);
    find_chunk_elmnt(array, x, chunk);
    printf("%i %i %i %i %i\n", chunk[0], chunk[1], chunk[2], chunk[3], chunk[4]);
    free(chunk);
    return(0);
}

/*
int *find_smallest(int *arr_a, int *len_a, int *chunk)
{
    int i;
    int *smallest;
    
    if (size <= 0)
        return NULL;
    *smallest = arr_a[0];  // Initialize pointer to the first element
    i = 1;
    while (i < *len_a) 
    {
        if (arr_a[i] < *smallest)
            smallest = &arr_a[i];  // Update pointer if a smaller element is found
        i++;
    }
    return smallest;
}



int *find_second_smallest(int *arr_a, int *len_a) 
{
    int i;
    int *smallest;
    int *secondsmallest;

    if (len_a <= 1)
        return NULL;
    *smallest = find_smallest(arr_a, len_a);
    *secondsmallest = NULL;
    i = 0;
    while (i < len_a) 
    {
        if (arr_a[i] != *smallest && (secondsmallest == NULL || arr_a[i] < *secondsmallest))
            secondsmallest = &arr_a[i];  // Update second smallest
        i++;
    }
    return secondsmallest;
}
*/
