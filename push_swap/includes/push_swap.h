/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:08:35 by root              #+#    #+#             */
/*   Updated: 2025/01/25 18:57:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_sa(int *arrayA, int *lengthA);
void	ft_sb(int *arrayB, int *lengthB);
void	ft_ss(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void	ft_pb(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void	ft_pa(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void	ft_ra(int *arrayA, int *lengthA);
void	ft_rb(int *arrayB, int *lengthB);
void	ft_rr(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void	ft_rra(int *arrayA, int *lengthA);
void	ft_rrb(int *arrayB, int *lengthB);
void	ft_rrr(int *arrayA, int *arrayB, int *lengthA, int *lengthB);
void	ft_putchar(char c);
long	ft_atol(const char *str);
void	ft_swap(int *array, int *length);
void	ft_push(int *arrSRC, int *arrDST, int *lenSRC, int *lenDST);
void	pushtoempty(int *arrSRC, int *arrDST, int *lenSRC, int *lenDST);
void	ft_pushagaintob(int *arrSRC, int *arrDST, int *lenSRC, int *lenDST);
void	ft_rotate(int *array, int *length);
void	ft_revrotate(int *array, int *length);
void	random2(int *array, int *length);
void	random3(int *array, int *length);
void	random4(int *array, int *length);
void	ft_putchar(char c);
void	quick_sort1(int *array, int *array2, int *lengthA, int *lengthB);
void	quick_sort2(int *array, int *array2, int *lengthA, int *lengthB);
void	quick_sort3(int *array, int *array2, int *lengthA, int *lengthB);
void	ab_not_sorted(int *array, int *array2, int *lengthA, int *lengthB);
void	a_not_sorted(int *array, int *lengthA);
void	b_not_sorted(int *array2, int *lengthB);
void	min_max(int *array, int *array2, int *lengthA, int *lengthB);
char	**ft_split(char *str, char c);
long	ft_atol(const char *str);
size_t	countsubstr(char const *str);
int		find_dup(int *arr, int length);
int		get_median(int *array, int length);
int		array_a_sort(int *arr, int *length);
int		array_b_sort(int *arr, int *length);
int		get_max(int *array2, int *lengthB);
int		get_min(int *array, int *lengthA);
int		checkarg1(char *str);
void	dupe_checker(int *array, int argnbr);
void	dosort_1(char *str);
void	dosort_2(char **array, int argnbr);


#endif