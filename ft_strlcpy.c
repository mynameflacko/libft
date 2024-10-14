/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:48:51 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/14 14:08:39 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
return: Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create.
For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus the length of src.
*/

#include "libft.h"

size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t counter;
    size_t len;

    counter = 0;
    len = 0;
    while (src[len])
        len++;
    if (dstsize == 0 || !src || !dst)
        return (len);
    while (counter < dstsize - 1 && src[counter])
    {
        dst[counter] = src[counter];
        counter++;
    }
    dst[counter] = '\0';
    return (len);
}
