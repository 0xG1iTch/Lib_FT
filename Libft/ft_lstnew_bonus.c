/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamm <mel-hamm@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-02 16:45:31 by mel-hamm          #+#    #+#             */
/*   Updated: 2024-11-02 16:45:31 by mel-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(siseof(*node));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
