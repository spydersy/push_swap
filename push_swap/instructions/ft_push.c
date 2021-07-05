/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:59:07 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/05 16:50:29 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_stack_size(t_stack *a, t_stack *b, int dest)
{
    if (a->size == 0 && dest == 2)
    {
        ft_error("CANT PUSH TO STACK B", 0);
        return (0);
    }
    if (b->size == 0 && dest == 1)
    {
        ft_error("CANT PUSH TO STACK A", 0);
        return (0);
    }
    return (1);
}

void    add_element(int *src, int *dst, int size_dst)
{
    
}

void    ft_push(t_stack *a, t_stack *b, int dest)
{
    int     *stack_a;
    int     *stack_b;

    if (check_stack_size(a, b, dest) == 0)
        return ;
    if (dest == 2)
    {
        stack_a = malloc(sizeof(int) * (a->size - 1));
        stack_b = malloc(sizeof(int) * (b->size + 1));
        a->size--;
        b->size++;
        add_element(a->stack, b->stack, b->size);
    }
    if (dest == 1)
    {
        stack_a = malloc(sizeof(int) * (a->size + 1));
        stack_b = malloc(sizeof(int) * (b->size - 1));
        a->size++;
        b->size--;
        add_element(b->stack, a->stack, a->size);
    }

}
