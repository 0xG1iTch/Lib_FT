/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 09:53:48 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-11-01 09:53:48 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*null_checker(char	*str)
{
	if (str == NULL)
		return (NULL);
	return (str);
}

static char	*handle_special_case(void)
{
	char	*str;

	str = malloc(12);
	if (str == NULL)
		return (NULL);
	str = "-2147483648";
	return (str);
}

static char	*handle_zero(void)
{
	char	*str;

	str = malloc(2);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (handle_special_case());
	len = numlen(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		return (handle_zero());
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/*
int	main(void)
{
	char	*i;

	i = ft_itoa(4676);
	printf("%s\n", i);
	free(i);
}
*/