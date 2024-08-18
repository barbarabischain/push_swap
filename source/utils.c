/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:48:58 by babischa          #+#    #+#             */
/*   Updated: 2024/08/18 18:40:53 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int is_duplicated(long int *array, long int num, int len)
{
	int	i;

	i = 0;
	while(i < len)
	{
		if (num == array[i])
			return(1)
		i++;
	}
	return (0);
}

int	isnum(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i])
	{
		if((str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return(0);
	}
	return(1);
}
