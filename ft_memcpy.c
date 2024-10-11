/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:46:24 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/11 15:21:22 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.

// The memcpy() function returns the original value of dst.

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    const unsigned char*    str_src;
    unsigned char*          str_dst;
    size_t counter;

    str_src = (const unsigned char*) src;
    str_dst = (unsigned char*) dst;
    counter = 0;

    while (counter < n)
    {
        str_dst[counter] = str_src[counter];
        counter++;
    }
    return (dst);
}