#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *copy;
    size_t  cnt;

    if (!s)
        return (0);
    cnt = 0;
    copy = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!copy)
        return (0);
    while (s[cnt])
    {
        copy[cnt] = s[cnt];
        cnt++;
    }
    return (copy);
}

int main()
{
    char test[] = "hallo";
    printf("%s", ft_strdup(test));
    return (0);
}