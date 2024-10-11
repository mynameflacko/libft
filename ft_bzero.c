/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:13:45 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/11 14:45:52 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t counter;
    unsigned char *str;
    
    str = (unsigned char *)s;
    counter = 0;
    while (counter < n)
    {
        str[counter] = 0;
        counter++;
    }
}