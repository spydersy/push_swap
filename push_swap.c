/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:43:08 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/18 14:53:25 by abelarif         ###   ########.fr       */
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
