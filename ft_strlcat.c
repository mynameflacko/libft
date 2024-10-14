/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:45:47 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/14 14:27:11 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.
It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that
either dstsize is incorrect or that dst is not a proper string).
return For strlcat() that means the initial length of dst plus the length of src.
*/

#include "libft.h"

size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;
    size_t i;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (dstsize == 0)
        return (src_len);
    if (dst_len > dstsize)
        return (dstsize + src_len);
    i = dst_len;
    while (*src && i < dstsize - 1)
        dst[i++] = *(src++);
    dst[i] = '\0';
    return (dst_len + src_len);
}
