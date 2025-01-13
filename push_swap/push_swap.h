#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

void    ft_sa(int *arrayA);
void    ft_sb(int *arrayB);
void    ft_ss(int *arrayA, int *arrayB);
void    ft_pb(int *arrayB, int *arrayA);
void    ft_pa(int *arrayA, int arrayB);
void    ft_ra(int *arrayA);
void    ft_rb(int *arrayB);
void    ft_rr(int *arrayA, int *arrayB);
void    ft_rra(int *arrayA);
void    ft_rrb(int *arrayB);
void    ft_rrr(int *arrayA, int *arrayB);


int ft_arraylength (int *array);
int ft_swap(int *array);
int ft_pushToEmpty (int *arraySRC, int *arrayDST);
int ft_push(int *arraySRC, int *arrayDST);
int ft_rotate(int *array);
int ft_revrotate(int *array);
char    **ft_split(char *str, char c)

#endif