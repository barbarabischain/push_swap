/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:42:00 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 14:30:18 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	init_stack(t_node **stack, char	**av, int ac)
{
	int		i;
	t_node	*tmp;

	i = 0;
	*stack = new_node(ft_atoi(av[i++]));
	while (i < ac)
	{
		tmp = new_node(ft_atoi(av[i]));
		add_node_last(stack, tmp);
		i++;
	}
}
