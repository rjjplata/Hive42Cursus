
#include "../includes/push_swap.h"

static int find_min_chunk_element(int *temparray, int *chunk, int *len_a, int i)
{
    int j;
    int min;
    int k;
    int found;
    int m;

    k = -1;
    min = INT_MAX;
    j = 0;
    while (j < *len_a) 
    {
        found = 0;
        m = 0;
        while (m < i) 
        {
            if (chunk[m] == temparray[j]) 
            {
                found = 1;
                break;
            }
            m++;
        }
        if (!found && temparray[j] < min)
        {
            min = temparray[j];
            k = j;
        }
        j++;
    }
    return k;
}

void find_chunk_elmnt(int *arr_a, int *chunk, int *len_a, int len)
{
    int i;
    int k;
    int *temparray;

    if (*len_a <= 0)
        return;
    i = 0;
    temparray = (int *)malloc(sizeof(int) * (*len_a));
    if (temparray == NULL)
        return;
    copy_array(arr_a, temparray, *len_a);
    while (i < len) 
    {
        k = find_min_chunk_element(temparray, chunk, len_a, i);
        
        if (k != -1)
            chunk[i] = temparray[k];
        else
            break;
        temparray[k] = INT_MAX;
        i++;
    }
    free(temparray);
}