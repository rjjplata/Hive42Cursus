#include "../includes/push_swap.h"

void	copy_array(int *array, int *temp, int length)
{
	int	i;

	i = 0;
	while (i <= (length - 1))
	{
		temp[i] = array[i];
		i++;
	}
}
