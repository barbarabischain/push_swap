/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:56:43 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 15:01:49 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	small_sort_three(t_node	**stack_a)
{
	int	max;

	if (!is_sorted(*stack_a))
	{
		max = get_max_value(*stack_a);
		if (max == (*stack_a)->index)
		{
			ra(stack_a);
			if (!is_sorted(*stack_a))
				sa(stack_a);
		}
		else if (max == (*stack_a)->next->index)
		{
			rra(stack_a);
			if (!is_sorted(*stack_a))
				sa(stack_a);
		}
		else
			sa(stack_a);
	}
}

void	small_sort_five(t_node	**stack_a, t_node	**stack_b)
{
	while (stack_size(*stack_a) > 3)
	{
		if (get_min_value(*stack_a) == (*stack_a)->value)
			pb(stack_a, stack_b);
		else if (get_min_value(*stack_a) == (*stack_a)->next->value)
		{
			sa(stack_a);
			pb(stack_a, stack_b);
		}
		else
		{
			while (get_min_value(*stack_a) != (*stack_a)->value)
				rra(stack_a);
			pb(stack_a, stack_b);
		}
	}
	small_sort_three(stack_a);
	while (stack_size(*stack_b) > 0)
		pa(stack_a, stack_b);
}
