#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min,int max)
{
	int i;
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;

	*range = malloc(size * sizeof(int));

	if (!*range)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}

	return (size);
}


int	main(void)
{
	int	*range;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, -2, 3);
	printf("size = %d\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
