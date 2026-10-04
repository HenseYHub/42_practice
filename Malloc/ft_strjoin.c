#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int total_len;
    int i;
    int j;
    int cop;
    char *result;

    if (size == 0)
    {
        result = malloc(1);
        if (!result)
            return(NULL);
        result[0] = '\0';
        return (result);
    }

    total_len = 0;
    i = 0;

    while(i < size)
    {
        total_len = total_len + ft_strlen(strs[i]);
        i++;
    }
total_len = total_len + ft_strlen(sep) * (size - 1);

    result = malloc(total_len + 1);
        if(!result)
            return (NULL);

    i = 0; 
    j = 0;
    while (i < size)
    {
        cop = 0;
        while(strs[i][cop])
        {
            result[j] = strs[i][cop];
            cop++;
            j++;
        }

        if (i < size -1)
        {
            cop = 0;
            while(sep[cop])
            {
                result[j] = sep[cop];
                cop++;
                j++;
            }

        }
        i++;
    }
    result[j] = '\0';
    return (result);
}


int main(void)
{
    char *strs[] = {"Hello", "42", "World"};
    char *result;

    result = ft_strjoin(3, strs, " - ");
    if(!result)
        return (1);
    printf("%s\n", result);
    free(result);
    return (0);
}