#ifndef LIBFT_H
# define LIBFT_H


# include <string.h>
// Testing Libs
# include <ctype.h>
# include <stdio.h>

int     ft_isalpha(int nbr);
int     ft_isdigit(int arg);
int     ft_isalnum(int argument);
int     ft_strlen(char const *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);

#endif