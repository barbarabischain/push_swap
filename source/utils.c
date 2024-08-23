/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:48:58 by babischa          #+#    #+#             */
/*   Updated: 2024/08/23 20:18:51 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

/*as funçoes dão segfault quando manda uma stack vazia*/

int	get_max_value(t_node	*stack)
{
	int	max;
	int	len;

	len = stack_size(stack);
	max = stack->value;
	while (len - 1 > 0)
	{
		if (max < stack->next->value)
			max = stack->next->value;
		stack = stack->next;
		len--;
	}
	return (max);
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

int	is_duplicated(long int *array, long int num, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (num == array[i])
			return (1);
		i++;
	}
	return (0);
}

int	isnum(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}
