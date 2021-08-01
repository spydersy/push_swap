/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reindex_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 19:01:20 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 19:04:34 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reindex_stack(t_stack *stack, t_stack *other_stack)
{
	int		zero_position;
	int		min;

	min = min_of_stack(stack);
	zero_position = -1;
	while (++zero_position < stack->size)
	{
		if (stack->stack[zero_position] == 0)
			break ;
	}
	if (zero_position < stack->size / 2)
	{
		while (stack->stack[0] != min)
		{
			ft_rotate(&stack, &other_stack, "a");
		}
	}
	else
	{
		while (stack->stack[0] != min)
		{
			ft_reverse_rotate(&stack, &other_stack, "a");
		}
	}
}
