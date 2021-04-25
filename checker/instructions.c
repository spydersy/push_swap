/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:26:21 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/24 22:31:02 by abelarif         ###   ########.fr       */
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
    if (dst->current_size - 1)
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
    }
    else if (flag == 2 && a->current_size >= 1) //pb
    {        
        move_element(a, b);
    }
}

void    swap(t_stack *a, t_stack *b, int flag)
{
    int     tmp;

    if (flag == 3 || flag == 2 || flag == 1)
    {
        if ((flag == 3 || flag == 1) && (a->current_size >= 2))
        {
            tmp = a->stack[0];
            a->stack[0] = a->stack[1];
            a->stack[1] = tmp;
            ft_putstr_fd("sa\n", 1);
        }
        if ((flag == 3 || flag == 2) && (b->current_size >= 2))
        {
            tmp = b->stack[0];
            b->stack[0] = b->stack[1];
            b->stack[1] = tmp;
            ft_putstr_fd("sb\n", 1);
        }
    }
}