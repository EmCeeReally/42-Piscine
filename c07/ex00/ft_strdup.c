#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if(!dest)
		return(0);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return(dest[i] = '\0', dest);
}
#include <stdio.h>
int main()
{
	char *src = "Emre";
	printf("%s",ft_strdup(src));

}