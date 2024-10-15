#include "libft.h"

int ft_atoi(const char *nptr)
{
    int nbr;

    nbr = 0;
    if (!nptr)
        return (0);
    while (*nptr && ft_isdigit(*nptr))
    {
        nbr = nbr * 10 + (*nptr - '0'); 
        nptr++;
    }
    return (nbr);
}

int main()
{
    const char test[] = "123H";
    const char test1[] = "123H";
    printf("%d\n", ft_atoi(test));
    printf("%d\n", ft_atoi(test1));
    return (0);
}