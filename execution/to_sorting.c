/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 07:54:23 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 18:11:08 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	A_is_sorted(t_stack *a, t_stack *b)
{
	int		i;

	i = -1;
	if (b->size == 0)
	{
		while (++i < a->size - 1)
		{
			if (a->stack[i] > a->stack[i + 1])
			{
				return (0);
			}
		}
	}
	else
		return (0);
	return (1);
}

void	DONE(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
	exit(EXIT_SUCCESS);
}

void	choice_algorithme(t_stack *a, t_stack *b)
{
	if (a->size <= 5)
	{
		small_sorting(a, b);
	}
	else
	{
		big_sorting(a, b);
	}
}

void	to_sorting(t_stack *a, t_stack *b)
{
	if (A_is_sorted(a, b) == 1)
		DONE(a, b);
	else
		choice_algorithme(a, b);
	DONE(a, b);
}
