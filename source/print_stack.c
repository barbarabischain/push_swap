/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:19:47 by babischa          #+#    #+#             */
/*   Updated: 2024/08/22 11:45:59 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	print_stack(t_node *stack)
{
	if (stack)
	{
		while (stack != NULL)
		{
			ft_printf("%d\n", stack->value);
			stack = stack->next;
		}
	}
}
