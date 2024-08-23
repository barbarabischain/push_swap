/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:41:31 by babischa          #+#    #+#             */
/*   Updated: 2024/08/23 20:32:31 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int is_valid(char **av, int ac)
{
	long int	*array;
	int			i;

	i = 0;
	array = ft_calloc(ac, sizeof(long int));
	while (*av)
	{
		if (isnum(*av))
		{
			array[i++] = ft_atol(*av);
			if (is_duplicated(array, array[i - 1], i - 1) ||
				array[i - 1] < INT_MIN || array[i - 1] > INT_MAX)
			{
				free(array);
				return(0);
			}
		}
		else
		{
			free(array);
			return(0);
		}
		av++;
	}
	free(array);
	return (1);
}

int main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_b = NULL;
	if(ac < 2)
		return (0);
	if (ac == 2 && !isnum(av[1]))
		return(write(2, "Error\n", 6)/ 6);
	if(!is_valid(av + 1, ac))
		return(write(2, "Error\n", 6)/ 6);
	init_stack(&stack_a, &av[1], ac - 1);
	//tester(&stack_a, &stack_b);
	// if(!is_sorted(stack_a))
	// {
	// 	if(stack_size(stack_a) == 2)
	// 		sa(stack_a);
	// 	else if (stack_size(stack_a) == 3)
	// 	 	tiny_sort(&stack_a);
		// else
		// 	pushswap()
//	}
//	if(is_sorted)
//		free_stack(stack_a, stack_b);
//	print_stack(stack_a);
	return (0);
}
