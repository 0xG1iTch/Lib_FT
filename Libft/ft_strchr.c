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

char	*ft_strchr(const char *s, int c)
{
	char	target;

	target = (char)c;
	if (target == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == target)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strchr("mohamed", '\0'));
}
*/