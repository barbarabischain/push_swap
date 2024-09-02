/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:26:14 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 19:48:17 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

t_node	*find_min_node(t_node *stack)
{
	t_node	*tmp;
	t_node	*min;

	min = NULL;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index == -1 && (min == NULL || tmp->value < min->value))
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	set_index(t_node	*stack)
{
	int		index;
	t_node	*min_node;

	index = 0;
	while (index < stack_size(stack))
	{
		min_node = find_min_node(stack);
		if (min_node != NULL)
			min_node->index = index++;
	}
}
