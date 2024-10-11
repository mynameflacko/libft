/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:33:59 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/11 13:16:00 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t          counter;
    unsigned char   *str;

    str = (unsigned char *)b;
    counter = 0;
    while (counter < len)
    {
        str[counter] = c;
        counter++;
    }
    return (str);
}