
#include "../includes/push_swap.h"

static int move_cost(int *len_a, int top, int bottom)
{
    if ((top - 1) <= (*len_a - bottom))
        return(1);
    return (0);
}

static void push_and_sort2(int *arr_a, int *arr_b, int *len_a, int *len_b, int *chunk, int j)
{
    int k;
    int top_index;
    int bottom_index;
    
    k = j;
    while (k > 0)
    {
        top_index = scan_chunk_top(arr_a, chunk, len_a, j);
        bottom_index = scan_chunk_bottom(arr_a, chunk, len_a, j);
        
        if (top_index == -1 || bottom_index == -1)
        {
            if (top_index == -1)
                chunk_sort2(arr_a, len_a, bottom_index);
            else if (bottom_index == -1)
                chunk_sort1(arr_a, len_a, top_index);
        }
        if (move_cost(len_a, top_index, bottom_index) == 1)
            chunk_sort1(arr_a, len_a, top_index);
        else if (move_cost(len_a, top_index, bottom_index) == 0)
            chunk_sort2(arr_a, len_a, bottom_index);
        chunk_sort3(arr_a, arr_b, len_a, len_b);
        k--;
    }
}

void push_and_sortb(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
    int chunk_divider;
    int i;
    int chunk_len;
    int *chunk;
    
    if (array_a_sort(arr_a, len_a) == 1)
        return;
    chunk_divider= 15;
    chunk_len = (*len_a / chunk_divider) + (*len_a % chunk_divider);
    while  (chunk_divider > 0)
    {
        chunk = (int *)malloc(sizeof(int) * chunk_len);
        if (chunk == NULL)
            return;
        find_chunk_elmnt(arr_a, chunk, len_a, chunk_len);
        push_and_sort2(arr_a, arr_b, len_a, len_b, chunk, chunk_len);
        free(chunk);
     chunk_divider--;
    }
    quick_sort3(arr_a, arr_b, len_a, len_b);
    int min = get_min(arr_a, len_a);
    if (arr_a[0] != min)
    {
        i = 0;
        while (arr_a[0] != min && i < *len_a)
        {
            ft_ra(arr_a, len_a);
            i++;
        }
    }
}
