#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%d\n", ft_strlen("Hello"));
    printf("%d\n", ft_strlen("He"));
    printf("%d\n", ft_strlen("Hello543"));
    printf("%d\n", ft_strlen("Hello234"));
    return (0);
}