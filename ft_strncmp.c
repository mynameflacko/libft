/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjenisch <fjenisch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:01:47 by fjenisch          #+#    #+#             */
/*   Updated: 2024/10/14 16:53:13 by fjenisch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s2_conv;
	unsigned char *s1_conv;

	s2_conv = (unsigned char *)s2;
	s1_conv = (unsigned char *)s1;
	while ((*s1_conv || *s2_conv) && n > 0)
	{
		if (*s1_conv > *s2_conv)
			return (1);
		else if (*s1_conv < *s2_conv)
			return (-1);
		s1_conv++;
		s2_conv++;
		n--;
	}
	return (0);
}
