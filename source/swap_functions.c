/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:54:51 by babischa          #+#    #+#             */
/*   Updated: 2024/08/22 15:29:49 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Swap the first 2 elements at the top of stack */

#include "../include/pushswap.h"

void	sa(t_node	*head)
{
	int	tmp;

	if ((stack_size(head) < 2) || head == NULL)
		return ;
	tmp = head->value;
	head->value = head->next->value;
	head->next->value = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_node	*head)
{
	int	tmp;

	if ((stack_size(head) < 2) || head == NULL)
		return ;
	tmp = head->value;
	head->value = head->next->value;
	head->next->value = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_node	*head_a, t_node	*head_b)
{
	int	tmp_a;
	int	tmp_b;

	if ((stack_size(head_a) < 2) || (stack_size(head_b) < 2))
		return ;
	tmp_a = head_a->value;
	head_a->value = head_a->next->value;
	head_a->next->value = tmp_a;

	tmp_b = head_b->value;
	head_b->value = head_b->next->value;
	head_b->next->value = tmp_b;
	write(1, "ss\n", 3);
}
