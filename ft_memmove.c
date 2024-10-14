 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:23:20 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/11 15:29:06 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
// The memmove() function returns the original value of dst.

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char          *str_dst;
    const unsigned char    *str_src;

    if (!src && !dst)
        return (dst);

    str_src = (unsigned const char*)src;
    str_dst = (unsigned char*)dst;

    if (str_dst <= str_src)
    {
        while (0 < len)
        {
            *(str_dst++) = *(str_src++);
            len--;
        }
    }
    str_src += len;
    str_dst += len;
    while (len--)
        *(--str_dst) = *(--str_src);
    return (dst);
}
