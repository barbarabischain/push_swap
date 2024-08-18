/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babischa <babischa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:41:07 by babischa          #+#    #+#             */
/*   Updated: 2023/11/04 18:01:47 by babischa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks  for  an  alphabetic  character. The value of the argument must be
representable as an unsigned char or the value of EOF.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
