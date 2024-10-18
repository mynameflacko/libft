#include "libft.h"

static int ft_inset(char c, char const *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}


char *ft_strtrim(char const *s1, char const *set)
{
    char *result_str;
    size_t s1_len;

    while (*s1 && ft_inset(*s1, set))
        s1++;
    s1_len = ft_strlen(s1);
    while (&s1[s1_len] >= s1 && ft_inset(s1[s1_len - 1], set))
        s1_len--;
    result_str = malloc(sizeof(char) * s1_len + 1);
    if (!result_str)
        return (NULL);
    result_str = ft_memcpy(result_str, s1, s1_len);
    result_str[s1_len] = '\0';
    return (result_str);
}

int main()
{
    char str[] = "__test__";
    char set[] = "_";

    printf("%s", ft_strtrim(str, set));
}