/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-31 09:37:22 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-10-31 09:37:22 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	total_len;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new_s = malloc(total_len + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
