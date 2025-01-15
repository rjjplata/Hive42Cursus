#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h> //need to remove
#include <limits.h>
#include <stdlib.h>
#include <string.h>

void    ft_putchar(char c);
void    ft_sa(int *arrayA, int *length);
void    ft_sb(int *arrayB, int *length);
void    ft_ss(int *arrayA, int *arrayB, int *length);
void    ft_pb(int *arrayB, int *arrayA, int *lengthB, int *lengthA);
void    ft_pa(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void    ft_ra(int *arrayA, int *length);
void    ft_rb(int *arrayB, int *length);
void    ft_rr(int *arrayA, int *arrayB, int *length); 
void    ft_rra(int *arrayA, int *length);
void    ft_rrb(int *arrayB, int *length);
void    ft_rrr(int *arrayA, int *arrayB, int *length);
long ft_atol(const char *str);

void ft_swap(int *array, int *length);
void ft_pushToEmpty (int *arraySRC, int *arrayDST, int *lengthA);
void ft_push(int *arraySRC, int *arrayDST, int *lengthA, int *lengthB);
void ft_rotate(int *array, int *length);
void ft_revrotate(int *array, int *length);
char    **ft_split(char *str, char c);
long ft_atol(const char *str);
void   random3(int *array, int *length);
//void    random5(int *array, int *length);
void    ft_putchar(char c);
size_t countsubstr(char const *str);
int find_dup(int *arr, int length);

#endif