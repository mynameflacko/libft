#include "libft.h"
#include <assert.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *p;
    size_t  counter;
    size_t  total_size;
    unsigned char* null_setter;

    null_setter = (unsigned char *)p;
    p = malloc(total_size);
    if (!p)
        return (NULL);
    while (counter < total_size)
        null_setter[counter++] = 0; 
    return (p);
}

int main()
{
    printf("%p", ft_calloc(12, 12));
    return (0);
}

