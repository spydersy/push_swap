/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 06:34:23 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 19:04:08 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insert_digit(t_stack *src, t_stack *dst)
{
	int		next_value;

	if (src->size == 2 && src->stack[0] > src->stack[1])
	{
		ft_reverse_rotate(&src, &dst, "b");
	}
	if (src->stack[0] == 0)
	{
		ft_push(&src, &dst, "a");
	}
	else if (src->stack[0] == (src->size + dst->size - 1))
	{
		ft_push(&src, &dst, "a");
		ft_rotate(&dst, &src, "a");
	}
	else
	{
		next_value = src->stack[0] + 1;
		while (dst->stack[0] != next_value)
		{
			ft_rotate(&dst, &src, "a");
		}
		ft_push(&src, &dst, "a");
	}
}

void	three_digits(t_stack *a, t_stack *b)
{
	if (a->stack[0] < a->stack[2] && a->stack[2] < a->stack[1])
	{
		ft_reverse_rotate(&a, &b, "a");
		ft_swap(&a, &b, "a");
	}
	else if (a->stack[1] < a->stack[0] && a->stack[0] < a->stack[2])
	{
		ft_swap(&a, &b, "a");
	}
	else if (a->stack[2] < a->stack[0] && a->stack[0] < a->stack[1])
	{
		ft_reverse_rotate(&a, &b, "a");
	}
	else if (a->stack[2] < a->stack[1] && a->stack[1] < a->stack[0])
	{
		ft_swap(&a, &b, "a");
		ft_reverse_rotate(&a, &b, "a");
	}
	else if (a->stack[1] < a->stack[2] && a->stack[2] < a->stack[0])
	{
		ft_rotate(&a, &b, "a");
	}
}

void	four_digits(t_stack *a, t_stack *b)
{
	if (a->stack[0] < a->stack[1])
	{
		ft_swap(&a, &b, "a");
	}
	ft_push(&a, &b, "b");
	three_digits(a, b);
	insert_digit(b, a);
	reindex_stack(a, b);
}

void	return_two(t_stack *a, t_stack *b)
{
	if (b->stack[0] == 0)
	{
		first_is_zero(a, b);
	}
	else if (b->stack[0] == 4)
	{
		first_is_four(a, b);
	}
	else if (b->stack[0] == 3)
	{
		first_is_three(a, b);
	}
	else if (b->stack[0] == 2)
	{
		first_is_two(a, b);
	}
}

void	small_sorting(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		ft_swap(&a, &b, "a");
		DONE(a, b);
	}
	else if (a->size == 3)
	{
		three_digits(a, b);
	}
	else if (a->size == 4)
	{
		four_digits(a, b);
	}
	else if (a->size == 5)
	{
		five_digits(a, b);
	}
}
