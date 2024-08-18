/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:41:31 by babischa          #+#    #+#             */
/*   Updated: 2024/08/18 18:39:40 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int is_valid(char **av, int ac)
{
	long int	*array;
//	int			zero;
	int			i;

	i = 0;
	array = ft_calloc(ac, sizeof(long int));
	while (*av)
	{
		if(isnum(*av))
		{
			array[i++] = ft_atol(*av);
		}
		{
			free(array);
			return(0);
		}
		printf("%ld\n", array[i - 1]);
		av++;
	}
	free(array);
	return (1);
}

int main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac == 2 && !isnum(av[1]))
		return(write(2, "Error\n", 6)/ 6);
	if(!is_valid(av + 1, ac))
		return(write(2, "Error\n", 6)/ 6);
	// init_stack();
	// if(!is_sorted(a))
	// {
	// 	if(stack_len(a) == 2)
	// 		sa(&a, );
	// 	else if (stack_len(a) == 3)
	// 		tiny_sort(&a);
	// 	else
	// 		pushswap()
	// }


	//atoi
	//verificar se é num
	//verificar se é maior que o intmin e menor que intmax
	//verificar traramento de sinais
	//não pode ser num repetido
	return (0);
}
