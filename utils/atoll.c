/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:24:01 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/28 20:30:30 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	atoll(char *str)
{
	int		i;
	int		mult;
	long	nbr;

	i = ft_strlen(str);
	mult = 10;
	nbr = 0;
	while (i >= 0)
	{
		if (i == 0)
		nbr = nbr + (str[i] - '0') * mult;
		mult *= 10;
		i--;
	}
}