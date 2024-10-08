int ft_isalpha(int nbr) {
    if ((nbr >= 'a' && nbr <= 'z') || (nbr >= 'A' && nbr <= 'Z'))
        return (1);
    else
        return (0);
}
