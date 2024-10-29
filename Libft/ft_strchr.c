/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 13:25:11 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-10-29 13:25:11 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	target;

	target = (char)c;
	while (*str)
	{
		if (*str == target)
			return ((char *)str);
		str++;
	}
	if (target == '\0')
		return ((char *)str);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char c = 'd';
	printf("%s,\n", ft_strchr("medchi", c));
	printf("%s,\n",strchr("medchi", c));
}
*/