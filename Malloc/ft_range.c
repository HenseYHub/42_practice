#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *range;
	int size;
	int i;

 	i = 0;
	if (min >= max)
		return(NULL);
	size = max - min;	
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	while(i < size)
	{
	range[i] = min + i;
	i++;
	}

	return (range);
}

int main(void)
{
	int *range;
	int i;

	range = ft_range(-2, 3);
	if (!range)
		return (1);
	i = 0;
	while (i < 5 )
	{
		printf("%d\n", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
