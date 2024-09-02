/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:48:58 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 15:04:14 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

/*as funçoes dão segfault quando manda uma stack vazia*/

int	get_max_value(t_node	*stack)
{
	int	max;
	int	len;

	len = stack_size(stack);
	max = stack->index;
	while (len - 1 > 0)
	{
		if (max < stack->next->index)
			max = stack->next->index;
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

int	count_binary_digits(t_node	*stack_a)
{
	int	count;
	int	max;

	count = 0;
	max = get_max_value(stack_a);
	if (max == 0)
		return (1);
	while (max > 0)
	{
		max >>= 1;
		count++;
	}
	return (count);
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
	if ((str[i] == '+' || str[i] == '-') && ft_strlen(str) > 1)
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
