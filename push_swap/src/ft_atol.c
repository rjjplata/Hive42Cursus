#include "push_swap.h"

long ft_atol(const char *str)
{
    long    result;
    long    sign;
    long    i;

    result = 0;
    sign = 1;
    i = 0;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while((str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(sign * result);
}