/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 20:22:49 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-10-29 20:22:49 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	target;
	unsigned char	*ptr;
	int				i;

	target = (unsigned char)c;
	ptr = (unsigned char)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i++] == target)
			return ((char *)s);
	}
	return (NULL);
}
