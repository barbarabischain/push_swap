/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:13:30 by babischa          #+#    #+#             */
/*   Updated: 2024/08/22 13:52:09 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Shift down all elements of a stack by 1.The last element becomes
the first one.*/

#include "../include/pushswap.h"

void	rra(t_node **stack)
{
	t_node	*tail;

	if (stack_size(*stack) > 1)
	{
		tail = last_node(*stack);
		tail->prev->next = NULL;
		tail->prev = NULL;
		add_node_front(stack, tail);
		*stack = tail;
		write(1, "rra\n", 4);
	}
}

void	rrb(t_node **stack)
{
	t_node	*tail;

	if (stack_size(*stack) > 1)
	{
		tail = last_node(*stack);
		tail->prev->next = NULL;
		tail->prev = NULL;
		add_node_front(stack, tail);
		*stack = tail;
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (stack_size(*stack_a) > 1 && stack_size(*stack_b) > 1)
	{
		t_node	*tail_a;
		t_node	*tail_b;

		tail_a = last_node(*stack_a);
		tail_a->prev->next = NULL;
		tail_a->prev = NULL;
		add_node_front(stack_a, tail_a);
		*stack_a = tail_a;

		tail_b = last_node(*stack_b);
		tail_b->prev->next = NULL;
		tail_b->prev = NULL;
		add_node_front(stack_b, tail_b);
		*stack_b = tail_b;
		write(1, "rrr\n", 4);
	}
}
