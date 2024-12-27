#include <unistd.h>
#include <string.h>


int ft_swap(int array[])
{
    int temp;
    int length;
    
    length = ft_arraylength(array);
    if (length <= 1)
    {
        return (0);
    }
    else
    {
        temp = array[0];
        array[0] = array[1];
        array[1] = temp;
        return (array[100]);
    }
}

int ft_arraylength (int array[])
{
    int length;

    length = 0;
    while (array[length] != 0 && length < 100) 
    {
        length++;
    }
    return (length);
}

int ft_findlowest(int array[])
{
    int temp;
    int i;
    int j;


    while (array)
    {
        while (array[i] < array[j])
        {
            j++;
        }
        i++;
    }
}

int ft_sort(int array[])
{
    int i;
    int length;

    length = ft_arraylength(array)
    i = 0;
    while(array[i] != array[length - 1])
    {
        j = 1;
        while{array[j] > array[j-1]}
        {

        }
    }


}