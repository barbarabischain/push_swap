/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:39:53 by babischa          #+#    #+#             */
/*   Updated: 2024/08/19 17:21:45 by babischa         ###   ########.fr       */
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
	long int		value;
//	int				*current_position;
//	int				*final_position;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

/***		VALIDATION		***/
int		isnum(char *str);
int		is_duplicated(long int *array, long int num, int len);

void	init_stack(t_node **stack, char	**av, int	ac);

/***		NODE		***/
t_node	*new_node(int content);
t_node	*last_node(t_node *node);
void	add_node_front(t_node **node, t_node *new);
void	node_add_back(t_node **node, t_node *new);


#endif
