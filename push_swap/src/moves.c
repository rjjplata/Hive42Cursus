#include "../includes/push_swap.h"

void ft_sa(int *arrayA, int length)
{
    ft_swap(arrayA, length);
    write(1, "sa\n", 3);
}

void ft_sb(int *arrayB, int length)
{
    ft_swap(arrayB, length);
}

void ft_ss(int *arrayA, int *arrayB, int length)
{
    ft_swap(arrayA, length);
    ft_swap(arrayB, length);
}

void ft_pb(int *arrayB, int *arrayA, int length)
{
    ft_push(arrayB, arrayA, length);
}

void ft_pa(int *arrayA, int *arrayB, int length)
{
    ft_push(arrayA, arrayB, length);
}

void ft_ra(int *arrayA, int length)
{
    ft_rotate(arrayA, length);
     write(1, "ra\n", 3);
}

void ft_rb(int *arrayB, int length)
{
    ft_rotate(arrayB, length);
}

void ft_rr(int *arrayA, int *arrayB, int length)
{
    ft_rotate(arrayA, length);
    ft_rotate(arrayB, length);
}

void ft_rra(int *arrayA, int length)
{
    ft_revrotate(arrayA, length);
     write(1, "rra\n", 4);
}

void ft_rrb(int *arrayB, int length)
{
    ft_revrotate(arrayB, length);
}

void ft_rrr(int *arrayA, int *arrayB, int length)
{
    ft_revrotate(arrayA, length);
    ft_revrotate(arrayB, length);
}