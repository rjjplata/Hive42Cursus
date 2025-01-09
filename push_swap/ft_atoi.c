#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * result);
}

int main (int argc, char **argv)
{
    int i = 0;
    int x;

    if (argc == 2)
    {   
        while(argv[1][i++])
        {
            x = atoi(argv[1]);
        }
    }
    while(argv[1][i])
    {
        printf("%i\n", atoi(argv[1]));
        i++;
    }
    return(0);

}