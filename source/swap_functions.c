/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:54:51 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 15:02:22 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Swap the first 2 elements at the top of stack */

#include "../include/pushswap.h"

void	sa(t_node	**stack)
{
	t_node	*tmp;

	if ((stack_size(*stack) < 2) || stack == NULL)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *stack;
	tmp->next = *stack;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	*stack = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_node	**stack)
{
	t_node	*tmp;

	if ((stack_size(*stack) < 2) || stack == NULL)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *stack;
	tmp->next = *stack;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	*stack = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;

	if ((stack_size(*stack_a) < 2) || (stack_size(*stack_b) < 2))
		return ;
	tmp_a = (*stack_a)->next;
	(*stack_a)->next = tmp_a->next;
	if (tmp_a->next != NULL)
		tmp_a->next->prev = *stack_a;
	tmp_a->next = *stack_a;
	tmp_a->prev = NULL;
	(*stack_a)->prev = tmp_a;
	*stack_a = tmp_a;
	tmp_b = (*stack_b)->next;
	(*stack_b)->next = tmp_b->next;
	if (tmp_b->next != NULL)
		tmp_b->next->prev = *stack_b;
	tmp_b->next = *stack_b;
	tmp_b->prev = NULL;
	(*stack_b)->prev = tmp_b;
	*stack_b = tmp_b;
	write(1, "ss\n", 3);
}
