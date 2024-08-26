/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:26:14 by babischa          #+#    #+#             */
/*   Updated: 2024/08/23 20:31:46 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void set_index(t_node *stack)
{
	int		index;
	t_node	*tmp;
	t_node	*min_node;
	int		is_indexed;

	index = 0;
	while (index < stack_size(stack))
	{
		tmp = stack;
		min_node = NULL;
		is_indexed = 0;

		while(tmp != NULL)
		{
			if (tmp->index == -1)
			{
				if(!is_indexed || tmp->value < min_node->value)
				{
					min_node = tmp;
					is_indexed = 1;
				}
			}
			tmp = tmp->next;
		}
	if (min_node != NULL)
		min_node->index = index++;
	}
}
                                                                                                                           