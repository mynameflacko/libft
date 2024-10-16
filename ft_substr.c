#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_str;
    size_t  str_len;
    size_t  cnt;

    if (!s)
        return (NULL);
    str_len = ft_strlen(s);
    if (start + len > str_len)
        return (0);
    sub_str = malloc(sizeof(char) * len + 1);
    if (!sub_str)
        return (NULL);
    cnt = 0;
    while (cnt < len)
    {
        sub_str[cnt] = s[start + cnt];
        cnt++;
    }
    sub_str[len + 1] = '\0';
    return (sub_str);   
}

int main()
{
    char str[] = "hallo";
    printf("%s", ft_substr(str, 1, 4));
    return (0);
}