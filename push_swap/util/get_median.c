#include "../includes/push_swap.h"

static int oddOrEven(int length)
{	
	int result;

	if(length % 2 == 0)
		result = length / 2;
	else
		result = (length / 2) + 1;
	return(result);
}

static void copyArray(int *array, int *temp, int length)
{
	int i;

	i = 0;
	while(i <= (length - 1))
	{
		temp[i] = array[i];
		i++;
	}
}

int get_median(int *array, int length)
{
	int	num;
	int i;
	int j;
	int temp;
	int median;
	int *temparray;

	temparray = (int *)malloc(sizeof(int) * (length - 1));
	if(temparray == NULL)
		return(0);
	copyArray(array, temparray, length);
	num = oddOrEven(length);
	i = 0;
	while (i < (length - 1)) 
	{
        j = 0;
        while (j < (length - i - 1)) 
		{
            if (temparray[j] > temparray[j + 1]) 
			{
                temp = temparray[j];
                temparray[j] = temparray[j + 1];
                temparray[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
	median = temparray[num - 1];
	free(temparray);
	return(median);
}