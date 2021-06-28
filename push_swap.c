/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:43:08 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/28 20:22:19 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char *argv[])
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		args_checker(argv[i]);
	}
	range_checker(argv);
	return (0);
}