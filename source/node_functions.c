/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:34:20 by babischa          #+#    #+#             */
/*   Updated: 2024/08/19 17:30:48 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

t_node	*new_node(int content)
{
	t_node	*new;

	new = ft_calloc(1, sizeof(t_node));
	new->value = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_node_front(t_node **node, t_node *new)
{
	if (node && new)
	{
		(*node)->prev = new;
		new->next = *node;
	}
}

t_node	*last_node(t_node *node)
{
	while (node->next != NULL)
	{
		node = node->next;
	}
	return (node);
}

void	node_add_back(t_node **node, t_node *new)
{
	t_node	*last;

	if (node)
	{
		if (*node == NULL)
			*node = new;
		else
		{
			last = last_node(*node);
			last->next = new;
			new->prev = last;
		}
	}
}
