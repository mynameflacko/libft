#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
// Testing Libs
# include <ctype.h>
# include <stdio.h>

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



#endif
