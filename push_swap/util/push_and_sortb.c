
#include "../includes/push_swap.h"


static void    find_chunk_elmnt(int *arr_a, int *chunk, int *len_a, int len)
{
    int i;
    int j;
    int min;
    int m;
    int found;
    int k;
    int *temparray;

    if (*len_a <= 0)
        return ;
    temparray = (int *)malloc(sizeof(int) * (*len_a)); // allocate space for all elements in arr_a
    if (temparray == NULL)
        return;
    copy_array(arr_a, temparray, *len_a); // copy all elements from arr_a
    i = 0;
    while (i < len) 
    {
        min = INT_MAX; // initialize min with the maximum possible integer value
        k = -1; // initialize k with an invalid index
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
            if (!found && temparray[j] < min)  // line 52
            {
                min = temparray[j]; // update min
                k = j;
            }
            j++;
        }
        if (k != -1) // check if a valid index was found
            chunk[i] = temparray[k];
        else
            break; // exit the loop if no valid index was found
        temparray[k] = INT_MAX; // mark the selected element as used
        i++;
    }
    free(temparray);
}

static int scan_chunk_top(int *arr_a, int *chunk, int *len_a, int chunk_len)
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

static int scan_chunk_bottom(int *arr_a, int *chunk, int *len_a, int chunk_len)
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

static int move_cost(int *len_a, int top, int bottom)
{
    if ((top - 1) <= (*len_a - bottom))
        return(1);
    return (0);
}

static void chunk_sort4(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
    int max;
    int min;
    int i;

    max = get_max(arr_b, len_b);
    min = get_min(arr_b, len_b);
    if (arr_a[0] < min)
    {
        i = 0;
        while (arr_b[0] != max && i < *len_b)
        {
            ft_rb(arr_b, len_b);
            i++;
        }
        ft_pb(arr_a, arr_b, len_a, len_b);
        ft_rb(arr_b, len_b);
    }
    else if (arr_a[0] > max && (!(arr_a[0] < max && arr_a[0] > min)))
    {
        i = 0;
        while ((arr_b[0] != max) && i < *len_b)
        {
            ft_rrb(arr_b, len_b);
            i++;
        }
        ft_pb(arr_a, arr_b, len_a, len_b);
    }
    else if (arr_a[0] < max && arr_a[0] > min)
    {
        i = 0;
        while (arr_b[0] > arr_a[0] && i < *len_b)
        {
            ft_rb(arr_b, len_b);
            i++;
        }
        while ((arr_a[0] > arr_b[*len_b - 1] || arr_a[0] < arr_b[0]) && i < *len_b)
        {
            ft_rrb(arr_b, len_b);
            i++;
        }
        ft_pb(arr_a, arr_b, len_a, len_b); //
    }
}

static void chunk_sort3(int *arr_a, int *arr_b, int *len_a, int *len_b)
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

static void chunk_sort2(int *arr_a, int *len_a, int bottom_index)
{
    if (*len_a == 0)
        return;
    while (bottom_index < *len_a)
    {
        ft_rra(arr_a, len_a);
        bottom_index++;
    }
}

static void chunk_sort1(int *arr_a, int *len_a, int top_index)
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

int divide_stack(int *len_a)
{
    int x;

    x = 0;
    if (*len_a >= 20 && *len_a <= 300)
    {
        x = 4;
        return (x);
    }
    else if (*len_a > 300)
        x = 11;
    return (x);
}


void    push_and_sortb(int *arr_a, int *arr_b, int *len_a, int *len_b)
{
    int i;
    int j;
    int k;
    int min;
    int *chunk;
    int top_index;
    int bottom_index;

    if ((array_a_sort(arr_a, len_a) == 1))
		return ;
    i = divide_stack(len_a);
    j = (*len_a / 4) + (*len_a % 4);
    while(i > 0)
    {
        printf("value of j = %i\n", j);
        chunk = (int *)malloc(sizeof(int) * j);
        if (chunk == NULL)
            return ;
        k = j;
        find_chunk_elmnt(arr_a, chunk, len_a, j);
        while (k > 0)
        {
     //       printf("\n\n\n\nchunk[0] = %i, chunk[1] = %i, chunk[2] = %i, chunk[3] = %i, chunk[4] = %i, chunk[5] = %i\n", chunk[0], chunk[1], chunk[2], chunk[3], chunk[4], chunk[5]);
    //        printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i\n", arr_a[0], arr_a[1], arr_a[2], arr_a[3], arr_a[4], arr_a[5], arr_a[6], arr_a[7], arr_a[8], arr_a[9], arr_a[10], arr_a[11], arr_a[12], arr_a[13], arr_a[14], arr_a[15], arr_a[16], arr_a[17], arr_a[18], arr_a[19], arr_a[20]);
     //       printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i\n", arr_b[0], arr_b[1], arr_b[2], arr_b[3], arr_b[4], arr_b[5], arr_b[6], arr_b[7], arr_b[8], arr_b[9], arr_b[10], arr_b[11], arr_b[12], arr_b[13], arr_b[14], arr_b[15], arr_b[16], arr_b[17], arr_b[18], arr_b[19], arr_b[20]);
            top_index = scan_chunk_top(arr_a, chunk, len_a, j);
     //       printf("top index = %i\n", top_index);
            bottom_index = scan_chunk_bottom(arr_a, chunk, len_a, j);
    //        printf("bottom index = %i\n", bottom_index);
            if(move_cost(len_a, top_index, bottom_index) == 1)
                chunk_sort1(arr_a, len_a, top_index);
            else if (move_cost(len_a, top_index, bottom_index) == 0)
                chunk_sort2(arr_a, len_a, bottom_index);
            chunk_sort3(arr_a, arr_b, len_a, len_b);
            k--;
        }
        i--;
    }
    quick_sort3(arr_a, arr_b, len_a, len_b);
    min = get_min (arr_a, len_a);
    if (arr_a[0] != min)
    {
        i = 0;
        while (arr_a[0] != min && i < *len_a)
        {
            ft_ra(arr_a, len_a);
            i++;
        }

    }
    free (chunk);
}
