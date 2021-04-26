/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:38:09 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/25 01:38:49 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    move_element(t_stack *src, t_stack *dst)
{
    int     *s;
    int     *d;
    int     i;

    i = 0;
    if (!(d = malloc(sizeof (int) * (dst->current_size + 1)))
    || !(s = malloc(sizeof (int) * (src->current_size - 1))))
        ft_error("MALLOC\n");
    dst->current_size++;
    src->current_size--;
    d[i] = src->stack[0];
    while (++i < dst->current_size)
        d[i] = dst->stack[i - 1];
    if (dst->current_size - 1 != 0)
        free(dst->stack);
    dst->stack = d;
    i = -1;
    while (++i < src->current_size)
        s[i] = src->stack[i + 1];
    free(src->stack);
    src->stack = s;
}

void    push(t_stack *a, t_stack *b, int flag)
{
    if (flag == 1 && b->current_size >= 1) //pa
    {
        move_element(b, a);
        ft_putstr_fd("pa\n", 1);
    }
    else if (flag == 2 && a->current_size >= 1) //pb
    {        
        move_element(a, b);
        ft_putstr_fd("pb\n", 1);
    }
}
