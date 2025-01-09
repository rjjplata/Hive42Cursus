#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_sa(int arrayA[])
{
    ft_swap(arrayA);
    write(1, "sa\n", 3);
}

void ft_sb(int arrayB[])
{
    ft_swap(arrayB);
}

void ft_ss(int arrayA[], int arrayB[])
{
    ft_swap(arrayA);
    ft_swap(arrayB);
}

void ft_pb(int arrayB[], int arrayA[])
{
    ft_push(arrayB, arrayA);
}

void ft_pa(int arrayA[], int arrayB[])
{
    ft_push(arrayA, arrayB);
}

void ft_ra(int arrayA[])
{
    ft_rotate(arrayA);
     write(1, "ra\n", 3);
}

void ft_rb(int arrayB[])
{
    ft_rotate(arrayB);
}

void ft_rr(int arrayA[], int arrayB[])
{
    ft_rotate(arrayA);
    ft_rotate(arrayB);
}

void ft_rra(int arrayA[])
{
    ft_revrotate(arrayA);
     write(1, "rra\n", 4);
}

void ft_rrb(int arrayB[])
{
    ft_revrotate(arrayB);
}

void ft_rrr(int arrayA, int arrayB)
{
    ft_revrotate(arrayA);
    ft_revrotate(arrayB);
}