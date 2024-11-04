/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 12:26:02 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-10-23 12:26:02 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_atoi(const char *str)
{
	int		sign;
	long long	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str++ - '0');
		if (sign == 1 && result > 2147483648)
			return (-1);
		else if (sign == -1 && result > 2147483648)
			return (0);
	}
	return ((int)(result * sign));
}

int	main(void)
{
	printf("%d\n", ft_atoi("74865763465756765674835686"));
	printf("%d\n", atoi("74865763465756765674835686"));
}
