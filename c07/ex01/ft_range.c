#include <stdlib.h> 

int *ft_range(int min, int max)
{
	int	i;
	int 	*range; 

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{ 
		range[i] = min; 
		i++;
		min++;
	}
	return(range);
}
#include <stdio.h>
int main()
{
	int min = 5; 
	int max = 10;

	int *range = ft_range(min ,max);
	printf("%d %d %d %d %d",range[0],range[1],range[2],range[3],range[4]);

}