/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:41:31 by babischa          #+#    #+#             */
/*   Updated: 2024/08/29 18:10:20 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int	validate_argument(char *av, long int *array, int index)
{
	long int	n;

	if (!isnum(av))
		return (0);
	n = ft_atol(av);
	if (n < INT_MIN || n > INT_MAX || is_duplicated(array, n, index))
		return (0);
	array[index] = n;
	return (1);
}

int	is_valid(char **av, int ac)
{
	long int	*array;
	int			i;

	i = 0;
	array = ft_calloc(ac, sizeof(long int));
	while (*av)
	{
		if (!validate_argument(*av, array, i))
		{
			free(array);
			return (0);
		}
		av++;
		i++;
	}
	free(array);
	return (1);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2 && !isnum(av[1]))
		return (write(2, "Error\n", 6) / 6);
	if (!is_valid(av + 1, ac) || ft_strlen(av[1]) == 0)
		return (write(2, "Error\n", 6) / 6);
	init_stack(&stack_a, &av[1], ac - 1);
	set_index(stack_a);
	if (!is_sorted(stack_a))
	{
		if (stack_size(stack_a) == 2)
			sa(&stack_a);
		else if (stack_size(stack_a) == 3)
			small_sort_three(&stack_a);
		else if (stack_size(stack_a) == 5)
			small_sort_five(&stack_a, &stack_b);
		else
			radix(&stack_a, &stack_b);
	}
	free_stack(&stack_a, &stack_b);
	return (0);
}
