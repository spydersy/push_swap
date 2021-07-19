/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 07:54:23 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/19 11:47:55 by abelarif         ###   ########.fr       */
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
    int i;

    i = 0;
    if (b->size != 0)
        ft_error("STACK B NOT EMPTY", 1);
    while (++i < a->size)
    {
        if (a->stack[i] < a->stack[i - 1])
            ft_error("NOT SORTED", 1);
    }
	free(a);
	free(b);
	exit(EXIT_SUCCESS);
}

void	choice_algorithme(t_stack *a, t_stack *b)
{
    if (a->size < 5)
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
