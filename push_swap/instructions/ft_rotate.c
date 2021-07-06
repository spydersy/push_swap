/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:59:01 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 08:33:31 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_rotate(t_stack *stack)
{
    if (stack->size == 0)
    {
        ft_error("ROTATE : EMPTY STACK", 0);
        return (0);
    }
    if (stack->size == 1)
        return (0);
    return (1);
}

int *rotation(t_stack *stack)
{
    int     *new;
    int     i;

    i = 0;
    new = malloc(sizeof(int) * stack->size);
    if (new == NULL)
        ft_error("MALLOC", 1);
    while (++i < stack->size)
    {
        new[i] = stack->stack[i - 1];
    }
    new[0] = stack->stack[stack->size - 1];
    new[stack->size - 1] = stack->stack[stack->size - 2];
    free(stack->stack);
    stack->stack = NULL;
    return (new);
}

void    ft_rotate(t_stack **a, t_stack **b, char *descriptor)
{
    if (descriptor[0] == 'r')
    {
        if (check_rotate(*a) == 1)
        (*a)->stack = rotation(*a);
        if (check_rotate(*b) == 1)
            (*b)->stack = rotation(*b);
    }
    else if (descriptor[0] == 'a' && check_rotate(*a) == 1)
    {
        (*a)->stack = rotation(*a);
    }
    else if (descriptor[0] == 'b' && check_rotate(*b) == 1)
    {
        (*b)->stack = rotation(*b);
    }
    ft_putchar_fd('r', 1);
    ft_putendl_fd(descriptor, 1);
}
