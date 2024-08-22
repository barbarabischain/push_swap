/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:08:11 by babischa          #+#    #+#             */
/*   Updated: 2024/08/22 11:53:03 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Take the first element from the top of one list and put it at the top of
another list */

#include "../include/pushswap.h"

void	pb(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*head;

	if (stack_size(*stack_a) > 0)
	{
		head = *stack_a;
		*stack_a = head->next;
		if(stack_size(*stack_a) > 0)
			(*stack_a)->prev = NULL;
		head->next = NULL;
		if (*stack_b == NULL)
			*stack_b = head;
		else
		{
			add_node_front(stack_b, head);
			*stack_b = head;
		}
	}
	write(1, "pb\n", 3);

}

void	pa(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*head;

	if (stack_size(*stack_b) > 0)
	{
		head = *stack_b;
		*stack_b = head->next;
		if(stack_size(*stack_b) > 0)
			(*stack_b)->prev = NULL;
		head->next = NULL;
		if (*stack_a == NULL)
			*stack_a = head;
		else
		{
			add_node_front(stack_a, head);
			*stack_a = head;
		}
	}
	write(1, "pa\n", 3);

}
