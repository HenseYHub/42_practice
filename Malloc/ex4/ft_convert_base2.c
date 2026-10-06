#include <stdlib.h>

int ft_base_len(char *base)
{
 int len;
 len = 0;
    while(base[len])
    {
        len++;
    }
    return (len);
}

int ft_nbr_base_len(int nbr, int base_len)
{
 int len;
 len = 0;
    if (nbr == 0)
    {
        return (1);
    }
    while(nbr != 0)
    {
        nbr = nbr / base_len;
        len++;
    }
    return (len);
}