/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:09:02 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 14:27:51 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	stackclear(t_node **stack)
{
	t_node	*current;
	t_node	*tmp;

	if (stack)
	{
		current = *stack;
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		*stack = NULL;
	}
}

void	free_stack(t_node **stack_a, t_node **stack_b)
{
	if (stack_a != NULL)
		stackclear(stack_a);
	if (stack_b != NULL)
		stackclear(stack_b);
}
