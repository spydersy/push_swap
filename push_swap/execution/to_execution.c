/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_execution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 06:04:54 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 09:52:05 by abelarif         ###   ########.fr       */
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
	free_stack(a);
	free_stack(b);
	return (0);
}
