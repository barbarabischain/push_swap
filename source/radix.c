/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:33:49 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 15:10:51 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int	is_sorted(t_node	*stack)
{
	int	i;
	int	len;

	i = 0;
	len = stack_size(stack);
	while (i < len - 1)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

void	radix(t_node	**stack_a, t_node	**stack_b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;
	int		digits;
	int		i;
	int		len;

	digits = count_binary_digits(*stack_a);
	i = 0;
	while ((i < digits) && (!is_sorted(*stack_a)))
	{
		tmp_a = *stack_a;
		tmp_b = *stack_b;
		len = stack_size(tmp_a);
		while (len--)
		{
			if ((tmp_a->index >> i & 1) == 1)
				ra(&tmp_a);
			else
				pb(&tmp_a, &tmp_b);
		}
		while (tmp_b != NULL)
			pa(&tmp_a, &tmp_b);
		i++;
		*stack_a = tmp_a;
	}
}
