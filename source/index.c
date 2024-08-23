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

set_index(t_node	*stack)
{
	int		len;
	int		i;
	int		min;
	t_node	*tmp;

	i = 0;
	len = stack_size(stack);
	tmp = stack;
	min = stack->value;

	while (len > i)
	{
		while (tmp != NULL)
		{
			if (min > stack->next->value)
				min = stack->next->value;
			tmp = tmp->next;
		}
		tmp = stack;
		i++;
	}
}

int	get_min_value(t_node	*stack)
{
	int	min;
	int	len;

	len = stack_size(stack);
	min = stack->value;
	while (len - 1 > 0)
	{
		if (min > stack->next->value)
			 min = stack->next->value;
		stack = stack->next;
		len--;
	}
	return (min);
}
