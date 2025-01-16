#include <stdio.h>

int get_median(int *array, int length)
{
	int	num;
	int i;
	int j;
	int temp;
	int median;

	if(length % 2 == 0)
		num = length / 2;
	else
		num = (length / 2) + 1;
	i = 0;
	while (i < (length - 1)) 
	{
        j = 0;
        while (j < (length - i - 1)) 
		{
            if (array[j] > array[j + 1]) 
			{
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
	median = array[num - 1];
	return(median);
}