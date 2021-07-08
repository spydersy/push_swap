/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 07:54:23 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/08 10:09:49 by abelarif         ###   ########.fr       */
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
	free(a);
	free(b);
	exit(EXIT_SUCCESS);
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
        ft_swap(&a, &b , "a");
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
        ft_rotate(&a, &b , "a");
    }
}

// void    five_digits(t_stack *a, t_stack *b)
// {
    // ft_push(&a, &b, "b");
    // ft_push(&a, &b, "b");
    // three_digits(&a, &b);
    
// }

void	choice_algorithme(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		ft_swap(&a, &b, "a");
		DONE(a, b);
	}
	else if (a->size == 3)
		three_digits(a, b);
    // else if (a->size == 5)
        // five_digits(a, b);
}

void	to_sorting(t_stack *a, t_stack *b)
{
	if (A_is_sorted(a, b) == 1)
		DONE(a, b);
	else
		choice_algorithme(a, b);
}
