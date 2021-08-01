/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_digits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:19:08 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 18:54:50 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_is_zero(t_stack *a, t_stack *b)
{
	if (b->stack[0] == 0 && b->stack[1] > a->stack[2])
	{
		ft_push(&b, &a, "a");
		ft_push(&b, &a, "a");
		return ;
	}
	else if (b->stack[0] == 0 && b->stack[1] == 1)
	{
		ft_swap(&a, &b, "b");
		ft_push(&b, &a, "a");
		ft_push(&b, &a, "a");
		return ;
	}
	else if (b->stack[0] == 0)
	{
		ft_push(&b, &a, "a");
		if (b->stack[0] == 2)
		{
			ft_rotate(&a, &b, "a");
			ft_rotate(&a, &b, "a");
		}
		else if (b->stack[0])
			ft_reverse_rotate(&a, &b, "a");
		ft_push(&b, &a, "a");
	}
}

void	first_is_four(t_stack *a, t_stack *b)
{
	ft_push(&b, &a, "a");
	if (b->stack[0] == 3)
	{
		ft_push(&b, &a, "a");
	}
	else if (b->stack[0] == 2)
	{
		ft_reverse_rotate(&a, &b, "a");
		ft_push(&b, &a, "a");
	}
	else if (b->stack[0] == 1)
	{
		ft_reverse_rotate(&a, &b, "a");
		ft_reverse_rotate(&a, &b, "a");
		ft_push(&b, &a, "a");
	}
}

void	first_is_three(t_stack *a, t_stack *b)
{
	if (b->stack[1] == 2)
	{
		ft_reverse_rotate(&a, &b, "a");
		ft_push(&b, &a, "a");
		ft_push(&b, &a, "a");
	}
	else if (b->stack[1] == 1)
	{
		ft_reverse_rotate(&a, &b, "a");
		ft_push(&b, &a, "a");
		ft_reverse_rotate(&a, &b, "a");
		ft_push(&b, &a, "a");
	}
}

void	first_is_two(t_stack *a, t_stack *b)
{
	ft_rotate(&a, &b, "a");
	ft_push(&b, &a, "a");
	ft_push(&b, &a, "a");
}

void	five_digits(t_stack *a, t_stack *b)
{
	ft_push(&a, &b, "b");
	ft_push(&a, &b, "b");
	if (b->stack[0] < b->stack[1] && b->stack[0] != 0)
	{
		ft_swap(&a, &b, "b");
	}
	if (b->stack[1] == 0)
		ft_swap(&a, &b, "b");
	three_digits(a, b);
	return_two(a, b);
	reindex_stack(a, b);
}
