#include <stdio.h>

int ft_isalpha(int nbr) {
    if ((nbr >= 'a' && nbr <= 'z') || (nbr >= 'A' && nbr <= 'Z'))
        return (1);
    else
        return (0);
}

int main() {
    
    int nbr;

    nbr = 'c';
    printf("%d", ft_isalpha(nbr));
    return (0);
}