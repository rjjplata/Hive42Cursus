#include "../includes/push_swap.h"

void ft_sa(int *arrayA, int *lengthA)
{
    ft_swap(arrayA, lengthA);
    write(1, "sa\n", 3);
}

void ft_sb(int *arrayB, int *lengthB)
{
    ft_swap(arrayB, lengthB);
    write(1, "sb\n", 3);
}

void ft_ss(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
    ft_swap(arrayA, lengthA);
    ft_swap(arrayB, lengthB);
    write(1, "ss\n", 3);
}

void ft_pb(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
    ft_push(arrayA, arrayB, lengthA, lengthB);
    write(1, "pb\n", 3);
}

void ft_pa(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
    ft_push(arrayB, arrayA, lengthB, lengthA);
    write(1, "pa\n", 3);
}

void ft_ra(int *arrayA, int *lengthA)
{
    ft_rotate(arrayA, lengthA);
     write(1, "ra\n", 3);
}

void ft_rb(int *arrayB, int *lengthB)
{
    ft_rotate(arrayB, lengthB);
    write(1, "rb\n", 3);
}

void ft_rr(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
    ft_rotate(arrayA, lengthA);
    ft_rotate(arrayB, lengthB);
    write(1, "rr\n", 3);
}

void ft_rra(int *arrayA, int *lengthA)
{
    ft_revrotate(arrayA, lengthA);
     write(1, "rra\n", 4);
}

void ft_rrb(int *arrayB, int *lengthB)
{
    ft_revrotate(arrayB, lengthB);
    write(1, "rrb\n", 4);
}

void ft_rrr(int *arrayA, int *arrayB, int *lengthA, int *lengthB)
{
    ft_revrotate(arrayA, lengthA);
    ft_revrotate(arrayB, lengthB);
    write(1, "rrr\n", 4);
}