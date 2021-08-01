/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:59:01 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 09:53:48 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_reverse_rotate(t_stack *stack)
{
	if (stack->size == 0)
	{
		ft_error("REVERSE ROTATE : EMPTY STACK", 0);
		return (0);
	}
	if (stack->size == 1)
		return (0);
	return (1);
}

int	*reverse_rotation(t_stack *stack)
{
	int		*new;
	int		i;

	i = 0;
	new = malloc(sizeof(int) * stack->size);
	if (new == NULL)
		ft_error("MALLOC", 1);
	while (++i < stack->size)
	{
		new[i] = stack->stack[i - 1];
	}
	new[0] = stack->stack[stack->size - 1];
	new[stack->size - 1] = stack->stack[stack->size - 2];
	free(stack->stack);
	stack->stack = NULL;
	return (new);
}

void	ft_reverse_rotate(t_stack **a, t_stack **b, char *descriptor)
{
	if (descriptor[0] == 'r')
	{
		if (check_reverse_rotate(*a) == 1)
			(*a)->stack = reverse_rotation(*a);
		if (check_reverse_rotate(*b) == 1)
			(*b)->stack = reverse_rotation(*b);
	}
	else if (descriptor[0] == 'a' && check_reverse_rotate(*a) == 1)
	{
		(*a)->stack = reverse_rotation(*a);
	}
	else if (descriptor[0] == 'b' && check_reverse_rotate(*b) == 1)
	{
		(*b)->stack = reverse_rotation(*b);
	}
	ft_putstr_fd("rr", 1);
	ft_putendl_fd(descriptor, 1);
}
