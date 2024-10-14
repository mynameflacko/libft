/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:04:16 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/14 16:00:22 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.
// The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

// return: The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.

char	*ft_strrchr(const char *s, int c)
{
	char	*location;

	location = (char *)s;
	while (*location)
		location++;
	if ((unsigned char)c == '\0')
		return (location);
	while (location >= s)
	{
		if ((unsigned char)c == *location)
			return (location);
		location--;
	}
	return (0);
}
