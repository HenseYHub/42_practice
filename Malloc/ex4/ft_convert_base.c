int ft_check_base(char *base)
{
    int i;
    int j;

    i = 0;

    while(base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[i] >= 9 && base[i] <= 13 || base[i] == ' ')
            return (0);
        j = i + 1;
        while(base[j])
        {
            if (base[i] == base[j])
                return (0);
        j++;

    }
    i++;
    }
    if (i < 2)
    {
        return (0);
    }
    return (1);
}


int ft_get_digit(char c, char *base)
{
    int i;

    i = 0;
    while(base[i])
    {
        if (base[i] == c)
        {
            return i;
        }
    i++;
    }
    return (-1);
}

int ft_atoi_base(char *nbr, char *base)
{
    int i;
    int base_len;
    int result;
    int sign;
    int digit;
    i = 0;
    base_len = 0;
    result = 0;

    while(base[base_len])
    {

    base_len++;
    }
    while(nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
    {
        i++;
    }
    sign = 1;
    while(nbr[i] == '+' || nbr[i] == '-')
    {
        if (nbr[i] == '-')
        {
            sign = -sign;
        }
    i++;
    }
    while(nbr[i])
    {
        digit = ft_get_digit(nbr[i], base);
        if (digit == -1)
            {
                break ;
            }
        result = result * base_len + digit;

    i++;
    }
    return (sign * result);
}