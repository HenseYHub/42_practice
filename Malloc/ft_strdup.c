#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *str)
{
	int i;
	int len;
	char *new_str;
	len = 0;

	while(str[len])
	{
	len++;
	}

	new_str = malloc(len +1);
	if (!new_str)
		return (NULL);

	i = 0;
	while(str[i])
	{
	new_str[i]= str[i];
	i++;
	}

	new_str[i] = '\0';
	return (new_str);
}

int main(void)
{
	char *copy;
	copy = ft_strdup("Hello 42!");
	if(!copy)
		return (1);
	printf("copy: %s\n", copy);
	free(copy);
	return(0);
}
