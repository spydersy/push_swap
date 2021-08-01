/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_of_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 19:00:41 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 19:04:21 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_of_stack(t_stack *stack)
{
	int		i;
	int		min;

	i = -1;
	min = stack->stack[0];
	while (++i < stack->size)
	{
		if (stack->stack[i] < min)
		{
			min = stack->stack[i];
		}
	}
	return (min);
}
