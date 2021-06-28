/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:58:25 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/28 18:02:20 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *descriptor, int flag)
{
	write(2, KRED, ft_strlen(KRED));
	write(2, "ERROR : ", 8);
	write(2, descriptor, ft_strlen(descriptor));
	if (flag == 1)
		exit(EXIT_FAILURE);
}