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

char  *ft_result_mal(int nbr, char *base)
{
	char *result;
	int num;
	int leg;
	int i;
	long n;

	num = ft_base_len(base);
	leg = ft_nbr_base_len(nbr, num);
	n = nbr;
	if (n < 0)
		result = malloc(sizeof(char) * (leg + 2));
	else
		result = malloc(sizeof(char) * (leg + 1));
	if (!result)
	{
		return (NULL);
	}
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		leg++;
	}
	result[leg] = '\0';
	i = leg - 1;
	if (n == 0)
		result[i] = base[0];
	while (n > 0)
	{
		result[i] = base[n % num];
		n = n / num;
		i--;
	}
	return (result)

}
