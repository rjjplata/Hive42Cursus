#include "../includes/push_swap.h"

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