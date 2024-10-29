/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 09:03:57 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-10-28 09:03:57 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*tkmila(unsigned char *d, unsigned char *s, size_t len)
{
	d += (len - 1);
	s += (len - 1);
	while (len > 0)
	{
		*d = *s;
		d--;
		s--;
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL || dst == NULL || len == 0)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d < s || d >= (s + len))
	{
		while (len > 0)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	}
	else
		tkmila(d, s, len);
	return (dst);
}
