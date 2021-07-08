/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 07:54:23 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/08 18:43:57 by abelarif         ###   ########.fr       */
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
    ft_putstr_fd(KBLU, 1);
    
    printf("STACK A :\n");
    print_stack(a, 1);

    printf("STACK B :\n");
    print_stack(b, 1);

    if (b->size != 0)
        ft_error("STACK B NOT EMPTY", 1);
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
    // three_digits(a, b);
    
// }

int     get_position(t_stack *stack, int nbr)
{
    int     i;

    i = -1;
    while (++i < stack->size)
    {
        if (stack->stack[i] == nbr - 1 || stack->stack[i] == nbr + 1)
            return (i * (stack->stack[i] - nbr));
    }
    return (i);
}

int     set_min(int position)
{
    int     min;

    if (position < 0)
    {
        min = position * -1;
    }
    else
    {
        min = position - 1;
    }
    return (min);
}

void    get_insertion_position(t_stack *a, int min, int max, int position)
{
    int     i;

    i = -1;
    while (a->stack[0] != max && a->stack[0] != min)
    {
        if (position < a->size / 2)
            ft_rotate(&a, NULL, "a");
        else
            ft_reverse_rotate(&a, NULL, "a");
    }
}

void    push_digit(t_stack *a, t_stack *b)
{
    int     position;
    int     limiter[2];

    if (b->stack[0] < a->stack[0])
    {
        // printf("TEST0000000000000000\n");
        // print_stack(a, 1);
        ft_push(&b, &a, "a");
        // printf("TEST\n");
        // print_stack(a, 1);
        return ;
    }
    else if (b->stack[0] > a->stack[a->size - 1])
    {
        ft_push(&b, &a, "a");
        ft_rotate(&a, &b, "a");
        // printf("ALLO\n");
        // print_stack(a, 1);
        return ;
    }
    position = get_position(a, b->stack[0]);
    limiter[0] = set_min(position);
    limiter[1] = limiter[0] + 1;
    get_insertion_position(a, limiter[0], limiter[1], position);
    ft_push(&b, &a, "a");
    
}

void    four_five_digits(t_stack *a, t_stack *b)
{
    int     i;
    int     init_size;
    int     zero_index;

    i = -1;
    init_size = a->size;
    while (++i < init_size - 3)
    {
        ft_push(&a, &b, "b");  
    }
    three_digits(a, b);
    
    printf("******************************TEST\n");
    print_stack(a, 1);
    sleep(10);
    i = -1;
    while (++i < init_size - 3)
    {
        push_digit(a, b);
    }
    i = -1;
    zero_index = 0;
    while (++i < a->size)
    {
        if (a->stack[i] == 0)
            zero_index = i;
    }
    while (a->stack[0] != 0)
    {
        // printf("X\n");
        if (zero_index < a->size / 2)
            ft_rotate(&a, &b, "a");
        else
            ft_reverse_rotate(&a, &b, "a");
        // print_stack(a, 1);
        // printf("******************************\n");
        // sleep(15);
    }
    
    // if (b->stack[0] < a->stack[0])
    // {
        // ft_push(&a, &b, "a");
    // }
    // else if (b->stack[0] > a->stack[2])
    // {
        // ft_push(&a, &b, "a");
        // ft_rotate(&a, &b, "a");
    // }
    // else if (a->stack[0] < b->stack[0] && b->stack[0] < a->stack[1])
    // {
        // ft_rotate(&a, &b, "a");
        // ft_push(&a, &b, "a");
        // ft_reverse_rotate(&a, &b, "a");
    // }
    // else if (a->stack[1] < b->stack[0] && b->stack[0] < a->stack[2])
    // {
        // ft_reverse_rotate(&a, &b, "a");
        // ft_push(&a, &b, "a");
        // ft_rotate(&a, &b, "a");
        // ft_rotate(&a, &b, "a");
    // }
}

void	choice_algorithme(t_stack *a, t_stack *b)
{
	if (a->size == 2)
	{
		ft_swap(&a, &b, "a");
		DONE(a, b);
	}
	else if (a->size == 3)
		three_digits(a, b);
    else if (a->size == 4 || a->size == 5)
    {
        four_five_digits(a, b);
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
