#include "../push_swap.h"

static char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str, char c)
{
    char **result;
    size_t i;
    size_t j;
    size_t k;
    size_t count;

    count = countsubstr(str);
    result = (char **)malloc(sizeof(char *) * (count + 1));
    if(!str || !result)
        return(NULL);
    i = 0;
    k = 0;
    while(str[i] != '\0')
    {
        while(str[i] && str[i] == c)
            i++;
        j = i;
        while(str[i] && ((str[i] == '+' || str[i] == '-') || (str[i] >= '0' && str[i] <= '9')))
            i++;
        if(i > j)
        {
            result[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(result[k++], &str[j], i - j);
        }
    }
    result[k] = NULL;
    return(result);
}