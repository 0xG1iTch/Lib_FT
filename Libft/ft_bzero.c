/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 08:48:38 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-10-28 08:48:38 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (s == NULL || n == 0)
		return ;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
