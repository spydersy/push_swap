/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:30:03 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/30 12:07:57 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int     bits_calculator(t_stack *a)
{
	int     max_value;
	int     c;

	c = 0;
	max_value = a->size - 1;
	while (max_value)
	{
		c++;
		max_value >>= 1;
	}
	return (c);
}

int     bin_value(int num, int shift)
{
	int     i;

	i = -1;
	if (num == 0)
		return (0);
	num >>= shift;
	if (num & 1)
		return (1);
	else
		return (0);
	return (0);
}

void	get_bits(t_stack *a, t_stack *b, int shift)
{
	int		i;
	int		c;
	int		original_size;

	c = 0;
	i = -1;
	original_size = a->size + b->size;
	while (++i != a->size && c != original_size)
	{
		if (bin_value(a->stack[i], shift) == 0)
		{
			ft_push(&a, &b, "b");
			c++;
			i = -1;
		}
		else
		{
			ft_rotate(&a, &b, "a");
			c++;
			i--;
		}
	}
	i = -1;
	int original_sizeB = b->size;

	while (++i < original_sizeB)
	{
		ft_push(&b, &a, "a");
	}
}

void    big_sorting(t_stack *a, t_stack *b)
{
	int     i;
	int     nb_bits;

	i = -1;
	nb_bits = bits_calculator(a);
	while (++i < nb_bits)
	{
		get_bits(a, b, i);
	}
	DONE(a, b);
}
