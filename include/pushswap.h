/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:39:53 by babischa          #+#    #+#             */
/*   Updated: 2024/08/18 15:12:18 by babischa         ###   ########.fr       */
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

int	isnum(char *str);
int error(void);

typedef struct s_node
{
	int				*value;
	int				*current_position;
	int				*final_position;
    struct s_node	*prev;
	struct s_node	*next;
}t_node;

#endif
