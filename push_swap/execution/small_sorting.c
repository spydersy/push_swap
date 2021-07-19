/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 06:34:23 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/19 10:03:38 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int     is_correct_position(t_stack *src, t_stack *dst)
{
    int     element;

    element = src->stack[0];
    if (element < dst->stack[0]
    && element > dst->stack[dst->size - 1])
    {
        return (1);
    }
    else if (element > dst->stack[0]
    && element < dst->stack[dst->size - 1])
    {
        return (1);
    }
    else if (element < dst->stack[0])
    {
        return (1);
    }
    return (0);
}

void    second_insertion(t_stack *src, t_stack *dst)
{
    if (src->stack[0] < dst->stack[0])
    {
        ft_push(&src, &dst, "a");
    }
    else if (src->stack[0] > dst->stack[3])
    {
        ft_push(&src, &dst, "a");
        ft_rotate(&src, &dst, "a");
    }
    else if (dst->stack[0] < src->stack[0]
    && src->stack[0] < dst->stack[1])
    {
        ft_rotate(&src, &dst, "a");
        ft_push(&src, &dst, "a");
        ft_reverse_rotate(&src, &dst, "a");
    }
    else if (dst->stack[1] < src->stack[0]
    && src->stack[0] < dst->stack[2])
    {
        ft_rotate(&src, &dst, "a");
        ft_rotate(&src, &dst, "a");
        ft_push(&src, &dst, "a");
        ft_reverse_rotate(&src, &dst, "a");
        ft_reverse_rotate(&src, &dst, "a");
    }
    else if (dst->stack[2] < src->stack[0]
    && src->stack[0] < dst->stack[3])
    {
        ft_reverse_rotate(&src, &dst, "a");
        ft_push(&src, &dst, "a");
        ft_rotate(&src, &dst, "a");
        ft_rotate(&src, &dst, "a");
    }
}

void    insert_digit(t_stack *src, t_stack *dst, int flag)
{
    int     element;
    int     insered;

    if (flag)
    {}
    element = src->stack[0];
    insered = 0;
    if (element == 0)
    {
        ft_push(&src, &dst, "a");
        return ;
    }
    if (element == 0)
    {}
    while (insered == 0)
    {
        if (element < dst->size / 2)
        {
            
        }
        else
        {
        
        }
    }    
}

// void    insert_digit(t_stack *src, t_stack *dst, int flag)
// {
//     if (flag == 2)
//     {
//         second_insertion(src, dst);
//     }
//     else
//     {
//         while (1)
//         {
//             // print_stack(src, 1);
//             // printf("**************************\n");
//             // print_stack(dst, 1);
//             // sleep(5);
//             if (is_correct_position(src, dst) == 1)
//             {
            
//                 ft_push(&src, &dst, "a");
//                 break;
//             }
//             else
//                 ft_rotate(&dst, &src, "a");
//         }
//     }
// }

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

void    reindex_stack(t_stack *stack, t_stack *other_stack)
{
    int     zero_position;

    zero_position = -1;
    while (++zero_position < stack->size)
    {
        if (stack->stack[zero_position] == 0)
            break;
    }
    if (zero_position < stack->size / 2)
    {
        while (stack->stack[0] != 0)
        {
            // printf("X\n");
            ft_rotate(&stack, &other_stack, "a");
        }
    }
    else
    {
        while (stack->stack[0] != 0)
        {
            ft_reverse_rotate(&stack, &other_stack, "a");
        }
    }
}

void    four_five_digits(t_stack *a, t_stack *b)
{
    int     i;
    int     init_size;

    i = -1;
    init_size = a->size;
    while (++i < init_size - 3)
    {
        ft_push(&a, &b, "b");  
    }
    three_digits(a, b);
    if (init_size == 4)
    {
        insert_digit(b, a, 1);
    }
    else
    {
        if (b->stack[0] > b->stack[1])
            ft_rotate(&a, &b, "b");
        insert_digit(b, a, 1);
        reindex_stack(a, b);
        insert_digit(b, a, 2);
    }
    if (A_is_sorted(a, b) == 0)
        reindex_stack(a, b);
}

void    small_sorting(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		ft_swap(&a, &b, "a");
		DONE(a, b);
	}
	else if (a->size == 3)
    {
		three_digits(a, b);
    }
    else if (a->size == 4 || a->size == 5)
    {
        four_five_digits(a, b);
    }
}