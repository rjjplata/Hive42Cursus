#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_sa(int arrayA[])
{
    ft_swap(arrayA);
}

int ft_sb(int arrayB[])
{
    ft_swap(arrayB);
}

int ft_ss(int arrayA[], arrayB[])
{
    ft_swap(arrayA);
    ft_swap(arrayB);
}

int ft_pb(int arrayB[], int arrayA[])
{
    ft_pushA(int arrayB, int arrayA);
}

int ft_pa(int arrayA[], int arrayB[])
{
    ft_pushA(int arrayA, int arrayB);
}

int ft_ra(int arrayA[])
{
    ft_rotate(arrayA);
}

int ft_rb(int arrayB[])
{
    ft_rotate(arrayB);
}

int ft_rr(int arrayA[], int arrayB[])
{
    ft_rotate(arrayA);
    ft_rotate(arrayB);
}

int ft_rra(int arrayA[])
{
    ft_revrotate(arrayA);
}

int ft_rrb(int arrayB[])
{
    ft_revrotate(arrayB);
}

int ft_rrr(int arrayA, int arrayB)
{
    ft_revrotate(arrayA);
    ft_revrotate(arrayB);
}