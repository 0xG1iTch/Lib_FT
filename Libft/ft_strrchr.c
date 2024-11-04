/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 08:48:55 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-11-01 08:48:55 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ocur;

	if ((char)c == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == (char) c)
		{
			last_ocur = (char *)s;
		}
		s++;
	}
	return (last_ocur);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("mohamed", 'o'));
}
*/