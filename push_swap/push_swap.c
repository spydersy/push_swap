/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:06:51 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 06:03:48 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int argc, char *argv[])
{
    t_stack *stack_a;

    stack_a = to_parsing(argc, argv);
    return (to_execution(stack_a));
    return (0);
}