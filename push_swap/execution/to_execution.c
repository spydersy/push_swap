/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_execution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 06:04:54 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/19 06:32:21 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort_stack(t_stack **a)
{
    int     i;
    int     tmp;
    int     repeat;

    tmp = 0;
    repeat = 1;
    (*a)->sorted = malloc(sizeof(int) * (*a)->size);
    i = -1;
    while (++i < (*a)->size)
    {
        (*a)->sorted[i] = (*a)->stack[i];
    }
    while (repeat)
    {
        i = -1;
        repeat = 0;
        while (++i < (*a)->size - 1)
        {
            if ((*a)->sorted[i] > (*a)->sorted[i + 1])
            {
                tmp = (*a)->sorted[i];
                (*a)->sorted[i] = (*a)->sorted[i + 1];
                (*a)->sorted[i + 1] = tmp;
                repeat = 1;
            }
        }
    }
}

t_stack *index_stack(t_stack *stack)
{
    int     i;
    int     j;

    i = -1;
    sort_stack(&stack);
    while (++i < stack->size)
    {
        j = -1;
        while (++j < stack->size)
        {
            if (stack->stack[i] == stack->sorted[j])
            {
                stack->stack[i] = j;
                break ;
            }
        }
    }
    i = -1;
    while (++i < stack->size)
        stack->sorted[i] = i;
    return (stack);
}

int	to_execution(t_stack *a)
{
	t_stack		*b;

	b = malloc(sizeof(t_stack));
	b->stack = malloc(sizeof(int) * 0);
	if (b == NULL || b->stack == NULL)
		ft_error("MALLOC", 1);
	b->size = 0;
    a = index_stack(a);
    to_sorting(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
