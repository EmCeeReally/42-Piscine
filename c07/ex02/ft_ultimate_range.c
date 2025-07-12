#include <stdlib.h>

int *ft_range(int min int max
{ 
	int	i;
	int	*res;

	if (i < max min
		return(0);
	i = 0;
	res = (int *)malloc(sizeof(int) * (max -min
	while (i < max - min
	{ 
		res[i] = i + min
		i++; 
	}
	return (res
}
