#include "libft.h"
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result_str;
    size_t s2_len;
    size_t s1_len;
    size_t cnt;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    result_str = malloc(sizeof(char) * (s1_len + s2_len) + 1);
    if (!result_str)
        return (NULL);
    cnt = 0;
    while (*s1)
    {
        result_str[cnt++] = *s1;
        s1++;
    }
    while (*s2)
    {
        result_str[cnt++] = *s2;
        s2++;
    }
    result_str[cnt] = '\0';
    return (result_str);
}

/* int main()
{
    char test[] = "";
    char test1[] = "";

    printf("%s", ft_strjoin(test, test1));
    return (0);
} */