#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
// Testing Libs
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>


int		ft_isalpha(int nbr);
int		ft_isdigit(int arg);
int		ft_isalnum(int argument);
int		ft_strlen(char const *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char *nptr);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);

#endif
