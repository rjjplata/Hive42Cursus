/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rplata <rplata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:08:35 by root              #+#    #+#             */
/*   Updated: 2025/01/27 15:34:34 by rplata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_sa(int *arr_a, int *len_a);
void	ft_sb(int *arr_b, int *len_b);
void	ft_ss(int *arr_a, int *arr_b, int *len_a, int *len_b);
void	ft_pb(int *arr_a, int *arr_b, int *len_a, int *len_b);
void	ft_pa(int *arr_a, int *arr_b, int *len_a, int *len_b);
void	ft_ra(int *arr_a, int *len_a);
void	ft_rb(int *arr_b, int *len_b);
void	ft_rr(int *arr_a, int *arr_b, int *len_a, int *len_b);
void	ft_rra(int *arr_a, int *len_a);
void	ft_rrb(int *arr_b, int *len_b);
void	ft_rrr(int *arr_a, int *arr_b, int *len_a, int *len_b);
void	ft_putchar(char c);
long	ft_atol(const char *str);
void	ft_swap(int *array, int *length);
void	ft_push(int *arr_src, int *arr_dst, int *len_src, int *len_dst);
void	pushtoempty(int *arr_src, int *arr_dst, int *len_src, int *len_dst);
void	ft_pushagaintob(int *arr_src, int *arr_dst, int *len_src, int *len_dst);
void	ft_rotate(int *array, int *length);
void	ft_revrotate(int *array, int *length);
void	random2(int *array, int *length);
void	random3(int *array, int *length);
void	random4(int *array, int *length);
void	ft_putchar(char c);
void	quick_sort1(int *array, int *array2, int *len_a, int *len_b);
void	quick_sort2(int *array, int *array2, int *len_a, int *len_b);
void	quick_sort3(int *array, int *array2, int *len_a, int *len_b);
void	ab_not_sorted(int *array, int *array2, int *len_a, int *len_b);
void	a_not_sorted(int *array, int *len_a);
void	b_not_sorted(int *array2, int *len_b);
void	min_max(int *array, int *array2, int *len_a, int *len_b);
char	**ft_split(char *str, char c);
char	*ft_strjoin(char const *s1, char const *s2);
long	ft_atol(const char *str);
size_t	countsubstr(char const *str);
size_t	ft_strlen(const char *str);
int		find_dup(int *arr, int length);
int		get_median(int *array, int length);
int		array_a_sort(int *arr, int *length);
int		array_b_sort(int *arr, int *length);
int		get_max(int *array, int *len_a);
int		get_min(int *array2, int *len_b);
int		checkarg1(char *str);
void	dupe_checker(int *array, int argnbr);
void	dosort_1(char *str);
void	dosort_2(char **array, int argnbr);
char 	*mixed_input(int argc, char **argv);

#endif