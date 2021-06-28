/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:56:38 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/28 20:27:09 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	int_condition(int index, char *arg)
{
	if(arg[index] == '-' && index != 0)
	{
		return (1);
	}
	if (ft_isdigit(arg[index]) == 1)
		return (1);
	return (0);
}

void	digit_checker(char *arg)
{
	int		i;

	i = -1;
	while (arg[++i])
	{
		if (ft_strlen(arg) == 0)
		{
			ft_error("EMPTY ARG\n", 1);
		}
		if (int_condition(i, arg) == 0)
		{
			ft_error("ARGS MUST BE DIGITS\n", 1);
		}
	}
}

void	args_checker(char *arg)
{
	digits_checker(arg);
}

