/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:57:35 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/06 08:34:12 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *descriptor, int flag)
{
	ft_putstr_fd(KRED, 2);
	ft_putstr_fd("ERROR : ", 2);
	ft_putendl_fd(descriptor, 2);
    ft_putstr_fd(KWHT, 2);
	if (flag == 1)
		exit(EXIT_FAILURE);
}
