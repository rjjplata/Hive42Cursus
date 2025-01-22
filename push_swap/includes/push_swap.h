#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h> //need to remove
#include <limits.h>
#include <stdlib.h>
#include <string.h>

void    ft_putchar(char c);
void    ft_sa(int *arrayA, int *lengthA);
void    ft_sb(int *arrayB, int *lengthB);
void    ft_ss(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void    ft_pb(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void    ft_pa(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void    ft_ra(int *arrayA, int *lengthA);
void    ft_rb(int *arrayB, int *lengthB);
void    ft_rr(int *arrayA, int *arrayB, int *lengthA, int *lengthB); 
void    ft_rra(int *arrayA, int *lengthA);
void    ft_rrb(int *arrayB, int *lengthB);
void    ft_rrr(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
long ft_atol(const char *str);

void ft_swap(int *array, int *length);
void ft_pushToEmpty (int *arraySRC, int *arrayDST, int *lengthSRC, int *lengthDST);
void ft_push(int *arraySRC, int *arrayDST, int *lengthSRC, int *lengthDST);
void ft_rotate(int *array, int *length);
void ft_revrotate(int *array, int *length);
char    **ft_split(char *str, char c);
long ft_atol(const char *str);
void   random3(int *array, int *length);
//void    random5(int *array, int *length);
void    ft_putchar(char c);
size_t countsubstr(char const *str);
int find_dup(int *arr, int length);
int get_median(int *array, int length);
void    quick_sort1(int *array, int *array2, int *lengthA, int *lengthB);
void    quick_sort2(int *array, int *array2, int *lengthA, int *lengthB);
void    quick_sort3(int *array, int *array2, int *lengthA, int *lengthB);
int arrayASortedOrNot(int *arr, int *length);
int arrayBSortedOrNot(int *arr, int *length);
void    AandBnotSorted(int *array, int *array2, int *lengthA, int *lengthB);
void    onlyAnotSorted(int *array, int *lengthA);
void    onlyBnotSorted(int *array2, int *lengthB);
void    min_max(int *array, int *array2, int *lengthA, int *lengthB);
int get_max(int *array2, int *lengthB);
int get_min(int *array, int *lengthA);

#endif