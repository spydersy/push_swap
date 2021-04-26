/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:21:44 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/26 19:15:54 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft/libft.h"
#include <stdio.h>

int         get_min_index(int *stack, int index, int size)
{
    int     min;

    min = index;
    while (++index < size)
    {
        if (stack[index] < stack[min])
            min = index;
    }
    return (min);
}

void        insertion_sort(int *stack, int size)
{
    int     index;
    int     min;
    int     tmp;

    index = 0;
    while (index < size)
    {
        min = get_min_index(stack, index, size);
        tmp = stack[min];
        stack[min] = stack[index];
        stack[index] = tmp;
        index++;
    }
}
