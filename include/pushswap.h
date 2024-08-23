/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:39:53 by babischa          #+#    #+#             */
/*   Updated: 2024/08/23 20:09:10 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "ft_printf.h"
# include "../library/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define ERROR	2
# define TRUE 1
# define FALSE 0
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
//	int				index;
	struct s_node	*next;
}	t_node;

/***		VALIDATION		***/
int		isnum(char *str);
int		is_duplicated(long int *array, long int num, int len);
int		is_sorted(t_node	*stack);

/*	STACK_FUNCTIONS	*/
void	init_stack(t_node **stack, char	**av, int	ac);

/***		NODE		***/
t_node	*new_node(int content);
t_node	*last_node(t_node *node);
void	add_node_front(t_node **node, t_node *new);
void	add_node_last(t_node **node, t_node *new);
int		stack_size(t_node	*stack);
void	print_stack(t_node *stack);

/***		OPERATIONS		***/
void	sa(t_node	*head);
void	sb(t_node	*head);
void	ss(t_node	*head_a, t_node	*head_b);
void	ra(t_node	**stack);
void	rb(t_node	**stack);
void	rr(t_node	**stack_a, t_node	**stack_b);
void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **stack_a, t_node **stack_b);
void	pb(t_node	**stack_a, t_node	**stack_b);
void	pa(t_node	**stack_a, t_node	**stack_b);

/*	GET MAX - GET MIN	*/
int	get_max_value(t_node	*stack);
int	get_min_value(t_node	*stack);

/*		TESTER		*/
void tester(t_node	**stack_a, t_node	**stack_b);

#endif
