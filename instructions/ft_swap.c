/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:58:58 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 09:54:26 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_swap(t_stack *stack)
{
	if (stack->size < 2)
	{
		ft_error("SWAP : LESS THAN 2 ELEMENTS", 0);
		return (0);
	}
	return (1);
}

int	*swap(t_stack *stack)
{
	int		tmp;

	tmp = stack->stack[1];
	stack->stack[1] = stack->stack[0];
	stack->stack[0] = tmp;
	return (stack->stack);
}

void	ft_swap(t_stack **a, t_stack **b, char *descriptor)
{
	if (descriptor[0] == 's')
	{
		if (check_swap(*a) == 1)
			(*a)->stack = swap(*a);
		if (check_swap(*b) == 1)
			(*b)->stack = swap(*b);
	}
	else if (descriptor[0] == 'a' && check_swap(*a) == 1)
	{
		(*a)->stack = swap(*a);
	}
	else if (descriptor[0] == 'b' && check_swap(*b) == 1)
	{
		(*b)->stack = swap(*b);
	}
	ft_putstr_fd("s", 1);
	ft_putendl_fd(descriptor, 1);
}
