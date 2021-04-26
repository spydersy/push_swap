/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:39:15 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/25 20:55:08 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    rotation(t_stack *s, int direction)
{
    int     *stack;
    int     i;

    i = -1;
    stack = malloc(sizeof(int) * s->current_size);
    if (stack == NULL)
        ft_error("MALLOC\n");
    while (++i < s->current_size)
    {
        if (i + direction == s->current_size)
            stack[i] = s->stack[0];
        else if (i + direction == -1)
            stack[i] = s->stack[s->current_size -1];
        else
            stack[i] = s->stack[i + direction];
    }
    free(s->stack);
    s->stack = stack;
}

void    rotate(t_stack *a, t_stack *b, int flag, int direction)
{
    if (flag == 3 || flag == 2 || flag ==1)
    {
        if ((flag == 3 || flag == 1) && (a->current_size >= 2))
        {
            rotation(a, direction);
        }
        if ((flag == 3 || flag == 2) && (b->current_size >= 2))
        {
            rotation(b, direction);
        }
    }
}
