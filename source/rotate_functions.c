/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:11:42 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 15:00:35 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Shift up all elements of a stack by 1. The first element becomes the
last one.*/

#include "../include/pushswap.h"

void	ra(t_node	**stack)
{
	t_node	*head;

	if (stack_size(*stack) > 1)
	{
		head = *stack;
		*stack = head->next;
		(*stack)->prev = NULL;
		head->next = NULL;
		add_node_last(stack, head);
		write(1, "ra\n", 3);
	}
}

void	rb(t_node	**stack)
{
	t_node	*head;

	if (stack_size(*stack) > 1)
	{
		head = *stack;
		*stack = head->next;
		(*stack)->prev = NULL;
		head->next = NULL;
		add_node_last(stack, head);
		write(1, "rb\n", 3);
	}
}

void	rr(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*head_a;
	t_node	*head_b;

	if (stack_size(*stack_a) > 1 && stack_size(*stack_b) > 1)
	{
		head_a = *stack_a;
		*stack_a = head_a->next;
		(*stack_a)->prev = NULL;
		head_a->next = NULL;
		add_node_last(stack_a, head_a);
		head_b = *stack_b;
		*stack_b = head_b->next;
		(*stack_b)->prev = NULL;
		head_b->next = NULL;
		add_node_last(stack_b, head_b);
		write(1, "rr\n", 3);
	}
}
