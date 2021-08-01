/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:02:35 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 16:53:02 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_duplicate_numbers(t_stack *a)
{
	int		i;
	int		j;

	i = -1;
	while (++i < a->size)
	{
		j = i;
		while (++j < a->size)
		{
			if (a->stack[i] == a->stack[j])
			{
				ft_error("DUPLICATE NUMBER", 1);
			}
		}
	}
}

int	alpha_checker(char *arg)
{
	int		i;

	i = -1;
	while (arg[++i])
	{
		if (allowd_characters_condition(arg[i]) == 1)
			return (1);
	}
	return (0);
}

void	minus_position_checker(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '-')
		{
			if (minus_position_condition(str, i) == 1)
				ft_error("(-) : Wrong position", 1);
		}
	}
}

t_stack	*range_checker(char *arg)
{
	int			i;
	char		**content;
	t_stack		*stack;

	i = -1;
	stack = malloc(sizeof(t_stack) * 1);
	stack->size = 0;
	content = get_content(arg);
	while (content[++i])
	{
		minus_position_checker(content[i]);
		ft_atoi(content[i]);
		stack->size++;
	}
	stack->stack = malloc(sizeof(int) * stack->size);
	if (stack == NULL || stack->stack == NULL)
		ft_error("MALLOC", 1);
	i = -1;
	while (++i < stack->size)
	{
		stack->stack[i] = ft_atoi(content[i]);
		free(content[i]);
	}
	free(content);
	return (stack);
}
