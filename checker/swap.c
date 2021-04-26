/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:37:30 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/25 01:37:54 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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