/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_execution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 06:04:54 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 08:36:29 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	to_execution(t_stack *a)
{
	t_stack		*b;

	b = malloc(sizeof(t_stack));
	b->stack = malloc(sizeof(int) * 0);
	if (b == NULL || b->stack == NULL)
		ft_error("MALLOC", 1);
	b->size = 0;
    ft_rotate(&a, &b, "a");
    ft_push(&a, &b, "b");
    ft_push(&a, &b, "b");
    // ft_rotate(&a, &b, "a");
    print_stack(a);
    printf("****************************\n");
    print_stack(b);
    free_stack(a);
    free_stack(b);
	return (0);
}