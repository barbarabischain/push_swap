/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:42:00 by babischa          #+#    #+#             */
/*   Updated: 2024/08/19 16:32:21 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	init_stack(t_node **stack, char	**av, int	ac)
{
	int	i;

	i = 0;

	*stack = ft_calloc(1,sizeof(t_node));
	(*stack)->value = ft_atol(av[i]);
	(*stack)->prev = NULL;

	while (i < ac)
	{
		
		*stack = ft_calloc(1,sizeof(t_node));
		(*stack)->value = ft_atol(av[i]);

		i++;
	}
	ac++;
//	printf("%ld\n", stack->value);
}
