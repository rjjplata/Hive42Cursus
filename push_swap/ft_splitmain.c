#include <stdlib.h>
#include <stdio.h>
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_substr.c"

size_t	ft_countsubstr(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	substrl;
	size_t	i;

	result = (char **)malloc((ft_countsubstr(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				substrl = ft_strlen(s);
			else
				substrl = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, substrl);
			s += substrl;
		}
	}
	result[i] = NULL;
	return (result);
}

long	ft_atol(const char *str)
{
	long	nbr;
	long	neg;
	long	i;

	nbr = 0;
	neg = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return ((nbr * neg));
}

int 	*ft_handleargs(char *argv)
{
	int *a;
	size_t totalargs = ft_countsubstr(argv, ' ');
    char **strings = ft_split(argv, ' ');

	a = (int *)malloc(sizeof(int) * totalargs);
	if(!a)
		return NULL;
	printf("%d\n", (int)totalargs);
    int i = 0;
	long val = 0;
    while (strings[i] != NULL)
    {
		val = ft_atol(strings[i]);
		a[i] = (int)val;
        //printf("%d \n", (int)val);
        free(strings[i]);
        i++;
    }
    free(strings);
	return a;

}

int        ft_isvalidarg(char *argv)
{
    int    i;

    i = 0;
    if(!(argv[0] >= '0' && argv[0] <= '9') && argv[i] != '+' && argv[i] != '-')
        return 0;
    while (argv[i] != '\0')
    {
      if(!(argv[i] >= '0' && argv[i] <= '9') && argv[i] != ' ' && argv[i] != '+' && argv[i] != '-')
            return 0;
        if (argv[i] == '+' || argv[i] == '-')
        {
          if(argv[i + 1] == '+' || argv[i + 1] == '-')
            return 0;
          i++;
        }
        if(argv[i] >= '0' && argv[i] <= '9')
            i++;
        if (argv[i] == ' ' && argv[i + 1] == ' ')
          return 0;
        else if (argv[i] == ' ' && argv[i + 1] != ' ')
          i++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
	int *a;
	size_t totalargs;

	a = NULL;
	if (argc == 2)
	{
		if (ft_isvalidarg(argv[1]) == 1)
		{
			totalargs = ft_countsubstr(argv[1], ' ');
			a = ft_handleargs(argv[1]);
			if(!a)
				free(a);
		}
		else
			printf("error\n");
	}
	int i = 1;
	int j = 0;
	long value = 0;
	if (argc > 2)
	{
		a = (int *)malloc(sizeof(int) * (argc - 1));
		while(i < argc)
		{
			if (ft_isvalidarg(argv[i]) == 1)
			{
				value = ft_atol(argv[i]);
				a[j] = (int)value;
				i++;
				j++;
			}
			else
			{
			//	free(a);
				break;
			}
		}
		printf("error\n");

		i = 0;
	while(i < argc - 1)
	{
		printf("a[%d] : %d\n", i, a[i]);
		i++;
	} 
	}
	i = 0;
	while(i < totalargs)
	{
		printf("a[%d] : %d\n", i, a[i]);
		i++;
	} 
	free(a);
    
}