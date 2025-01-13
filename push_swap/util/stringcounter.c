#include "../push_swap.c"

size_t countsubstr(char const *str)
{
    int i = 0;
    unsigned int count = 0;

    if (str[i] == '\0')
        return 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' && (str[i] != '\0'))
            i++;
        if (str[i] == '+' || str[i] == '-' || (str[i] >= '0' && str[i] <= '9')) 
        {
            i++;
            count++;
        }
        while (str[i] != ' ' && (str[i] >= '0' && str[i] <= '9'))
                i++;
    }
    return(count);
}