#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    char    *result;
    size_t  ctn_b;
    size_t  ctn_l;
    size_t  ctn_tmp;

    if (!little || !big)
        return (0);
    if (!little)
        return ((char *)big);
    ctn_b = 0;
    while (big[ctn_b] && ctn_b < len)
    {

        ctn_l = 0;
        if (big[ctn_b] == little[ctn_l])
        {
            result = (char *)&big[ctn_b];
            ctn_tmp = ctn_b;
            while (big[ctn_tmp] && little[ctn_l] && ctn_tmp < len 
                    && big[ctn_tmp] == little[ctn_l])
            {
                ctn_l++;
                ctn_b++;
            }
            if (little[ctn_l] == '\0')
                return (result);
        }
        ctn_b++;
    }
    return (0);
}