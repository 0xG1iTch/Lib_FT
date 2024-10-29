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

int	ft_atoi(char *str)
{
	int		sign;
	long	result;

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
		if (sign == 1 && result < 0)
			return (-1);
		else if (sign == -1 && result < 0)
			return (0);
	}
	return ((int)(result * sign));
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char  *c = "-5477";
	printf("%i\n", ft_atoi(c));
	printf("%i\n", atoi(c));
}
*/