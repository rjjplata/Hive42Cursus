#include "../includes/push_swap.h"

void chunk_sort3(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
    if (*len_a == 0)
        return;
    if (*len_b == 0)
        ft_pb(arr_a, arr_b, len_a, len_b);
    else if (*len_b == 1)
    {
        ft_pb(arr_a, arr_b, len_a, len_b);
        if (array_b_sort(arr_b, len_b) == 0)
        {
            if (arr_a[0] > arr_a[1] && arr_b[0] < arr_b[1])
                    ft_ss(arr_a, arr_b, len_a, len_b);
            else if (arr_a[0] < arr_a[1] && arr_b [0]< arr_b[1])
                    ft_sb(arr_b, len_b);
        }
    }
    else if (*len_b >= 2)
        chunk_sort4(arr_a, arr_b, len_a, len_b);
}

void chunk_sort2(int *arr_a, int *len_a, int bottom_index)
{
    if (*len_a == 0)
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

    if (*len_a == 0)
        return;
    i = 0;
    while (i < top_index)
    {
        ft_ra(arr_a, len_a);
        i++;
    }
}
