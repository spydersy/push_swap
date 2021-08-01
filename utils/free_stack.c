/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:03:56 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/01 19:11:37 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack *stack)
{
	free(stack->stack);
	free(stack->sorted);
	stack->stack = NULL;
	stack->sorted = NULL;
	free(stack);
	stack = NULL;
}
